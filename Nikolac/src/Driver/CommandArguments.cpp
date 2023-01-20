#include <regex>

#include "Driver/CommandArguments.hpp"

namespace Nikola
{
    bool isLongOption(std::string_view op)
    {
        return op.starts_with("--");
    }

    bool isShortOption(std::string_view op)
    {
        return op.starts_with("-") && !isLongOption(op);
    }

    bool isValidSourceFileName(std::string_view fileName)
    {
        std::regex fileRegex{"[a-zA-Z_-][a-zA-Z0-9_-]*\\.nik"};
        return std::regex_match(fileName.begin(), fileName.end(), fileRegex);
    }

    std::string getArgumentValue(std::string_view op)
    {
        auto idx = op.find("=");
        return std::string{op.begin() + idx + 1, op.end()};
    }

    NikolaOptions getOpts(int argc, char** argv)
    {
        NikolaCommandArguments args = NikolaCommandArguments::NONE;

        std::vector<std::string> fileNames;

        for(char** ptr = argv + 1; ptr != argv + argc; ++ptr)
        {
            std::string_view opt = *ptr;

            if(isLongOption(opt))
            {
                if(opt == "--help")
                {
                    args |= NikolaCommandArguments::SHOW_HELP;
                }
                else if (opt == "--version")
                {
                    args |= NikolaCommandArguments::SHOW_VERSION;
                }
                else if (opt == "--executable")
                {
                    std::string name = getArgumentValue(opt);
                }
            }
            else if (isShortOption(opt))
            {
                if(opt == "-h")
                {
                    args |= NikolaCommandArguments::SHOW_HELP;
                }
                else if (opt == "-v")
                {
                    args |= NikolaCommandArguments::SHOW_VERSION;
                }
                else if (opt == "-e")
                {
                    std::string name = getArgumentValue(opt);
                }
            }
            else if (isValidSourceFileName(opt))
            {
                fileNames.emplace_back(opt);
            }
        }
    }
}
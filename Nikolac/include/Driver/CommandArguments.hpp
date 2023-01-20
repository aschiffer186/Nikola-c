#ifndef COMMAND_ARGUMENTS_HPP
#define COMMAND_ARGUMENTS_HPP

#include <string>
#include <vector>

namespace Nikola
{
    enum class NikolaCommandArguments
    {
        NONE = 0,
        SHOW_HELP = 1,
        SHOW_VERSION = 1 << 1
    };


    inline NikolaCommandArguments& operator&=(NikolaCommandArguments& lhs, NikolaCommandArguments& rhs)
    {
        using NCAType = std::underlying_type_t<NikolaCommandArguments>;
        lhs = static_cast<NikolaCommandArguments>(static_cast<NCAType>(lhs) & static_cast<NCAType>(rhs));
    }

    inline NikolaCommandArguments operator&(NikolaCommandArguments lhs, NikolaCommandArguments rhs)
    {
        lhs &= rhs;
        return lhs;
    }

    inline NikolaCommandArguments& operator|=(NikolaCommandArguments& lhs, NikolaCommandArguments rhs)
    {
        using NCAType = std::underlying_type_t<NikolaCommandArguments>;
        lhs = static_cast<NikolaCommandArguments>(static_cast<NCAType>(lhs) | static_cast<NCAType>(rhs));
    }

    inline NikolaCommandArguments operator|(NikolaCommandArguments lhs, NikolaCommandArguments rhs)
    {
        lhs |= rhs;
        return lhs;
    }


    inline NikolaCommandArguments operator~(NikolaCommandArguments lhs)
    {
        return ~lhs;
    }

    struct NikolaOptions
    {
        NikolaCommandArguments arguments;
        std::string outputName;
        std::vector<std::string> inputFileNames;
    };

    NikolaOptions getOpts(int argc, char** argv);
} // namespace Nikolac


#endif
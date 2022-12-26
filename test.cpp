int global = 1;

struct Bar
{
    void operator()()
    {

    }
};

Bar foo()
{
    return Bar{};
}

int main()
{
    (foo())();
}
struct Foo
{
    Foo()
    {
        throw 1;
    }
};

struct Bar
{
    Bar()
    : b{new Foo{}}
    {

    }

    ~Bar()
    {
        delete b;
    }
private:
    Foo* b;
};

int main()
{
 
    Bar b;   
    return 0;
}
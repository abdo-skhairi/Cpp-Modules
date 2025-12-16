#include <iostream>

class parent
{
    public:
        int i;
    parent()
    {
        i = 0;
    }
};

class child: public parent
{
    child()
    {
        i = 1;
    }
};

class gchild: public parent
{
    gchild()
    {
        i = 1;
    }
};

int main()
{
    parent obj1;
    child obj2;
    gchild obj3;
}

#include <iostream>
// multiple inheratence

class A{
    public:
        A()
        {
            std::cout << "I'm A" << "\n";
        }
};

class B{
    public:
        B()
        {
            std::cout << "I'm B" << "\n";
        }
};

class C: public A, public B{
    public:
        C()
        {
            std::cout << "I'm C" << "\n\n\n";
        }
};

int main()
{
    C obj;
    B ob2;

}

#include <iostream>

class My_class{
    private:
        std::string A;
    public:
        void method1(void)
        {
            std::cout << "Abdo here";
        }
};

int main()
{
    My_class obj1;

    obj1.method1();
}
#include <iostream>

class My_class{
    private:
        std::string A;
    public:
        void    method1(void);
};

void My_class::method1(void)
{
    int i = 10;
    while(i >= 0)
    {
        std::cout << "Abdo here" << "\n";
        i--;
    }
}

int main()
{
    My_class obj1;

    obj1.method1();
}

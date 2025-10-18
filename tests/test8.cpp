#include <iostream>

//freind method

class ma_class{
    private:
        int i;
    public:
        void method(int number);
        friend void fun(ma_class c);
};

void ma_class::method(int number)
{
    i = number;
}

void fun(ma_class c)
{
    std::cout << c.i << "\n";
}

int main()
{
    ma_class obj1;
    obj1.method(5);
    fun(obj1);
}

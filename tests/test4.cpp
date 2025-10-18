#include <iostream>

class ma_class{
    private:
        int i;
    public:
        int method(int number);
};

int ma_class::method(int number)
{
    return(number);
}


int main()
{
    ma_class obj1;
    std::cout << obj1.method(9999);
}
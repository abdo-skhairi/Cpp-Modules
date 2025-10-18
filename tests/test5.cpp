#include <iostream>

class Dog{
    public:
        void bark()
        {
            std::cout << "Woof!";
        }
};

int main()
{
    Dog obj;
    obj.bark();
    return(0);
}

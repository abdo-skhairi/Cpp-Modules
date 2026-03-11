#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* arr[4];

    arr[0] = new Dog();
    arr[1] = new Dog();
    arr[2] = new Cat();
    arr[3] = new Cat();

    for (int i = 0; i < 4; i++)
    {
        std::cout << arr[i]->getType() << " says: ";
        arr[i]->makeSound();
    }

    for (int i = 0; i < 4; i++)
        delete arr[i];

    return 0;
}

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* a = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << "\n##Cat sound##" << std::endl;
    i->makeSound();
    std::cout << "\n##Dog sound##" << std::endl;
    j->makeSound();
    std::cout << "\n##Animal sound##" << std::endl;
    a->makeSound();
    return 0;
}

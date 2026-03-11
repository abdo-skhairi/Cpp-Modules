#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal* animals[4];

    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();

    std::cout << "\n--- Deep Copy Test ---\n";

    Dog dog1;
    dog1.getBrain()->setIdea(0, "Eat");

    Dog dog2 = dog1;

    std::cout << "dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;

    dog2.getBrain()->setIdea(0, "Sleep");

    std::cout << "\nAfter modifying dog2:\n";
    std::cout << "dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n--- Deleting Animals ---\n";

    for (int i = 0; i < 4; i++)
        delete animals[i];

    return 0;
}
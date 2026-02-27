#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal " << type << " constructor called" << std::endl; 
    type = "";
}

Animal::~Animal()
{
    std::cout << "Animal " << type << " destructor called" << std::endl;
}


Animal &Animal::operator=(const Animal &other)
{
    if(this != &other)
    {
        type = other.type;
    }
    std::cout << "Copy assignment operator called for " << std::endl;
    return(*this);
}

Animal::Animal(const Animal &other)
{
    this->type = other.type;
    std::cout << "Copy constructor called for " << type << std::endl;
}

void Animal::makeSound()
{
    std::cout << "Animal sound" << std::endl;
}

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat " << type << " constructor called" << std::endl; 
    type = "";
}

Cat::~Cat()
{
    std::cout << "Cat " << type << " destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if(this != &other)
    {
        type = other.type;
    }
    std::cout << "Cat Copy assignment operator called for " << std::endl;
    return(*this);
}

Cat::Cat(const Cat &other)
{
    this->type = other.type;
    std::cout << "Cat Copy constructor called for " << type << std::endl;
}

void Cat::makeSound()
{
    std::cout << "Cat sound" << std::endl;
}

std::string Cat::getType()
{
    return(type);
}
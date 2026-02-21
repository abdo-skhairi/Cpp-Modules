#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    hitPoints = 100;
    energyPoints = 10;
    attackDamage = 0;
    name = "Default";
    std::cout << "ClapTrap " << name << " created by default constructor!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    hitPoints = 100;
    energyPoints = 10;
    attackDamage = 0;
    this->name = name;
    std::cout << "ClapTrap " << name << " created by para constructor!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << "Copy constructor called for " << name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "Copy assignment operator called for " << name << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot attack, it's destroyed!" << std::endl;
        return;
    }
    if (energyPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot attack, no energy left!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " is already destroyed!" << std::endl;
        return;
    }
    hitPoints -= amount;
    if (hitPoints < 0)
        hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount 
              << " points of damage! Remaining HP: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot repair, it's destroyed!" << std::endl;
        return;
    }
    if (energyPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot repair, no energy left!" << std::endl;
        return;
    }
    hitPoints += amount;
    energyPoints--;
    std::cout << "ClapTrap " << name << " repairs itself for " << amount
              << " points! Current HP: " << hitPoints << std::endl;
}

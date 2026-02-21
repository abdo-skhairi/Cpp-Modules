#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string &target)
{
    if (hitPoints <= 0)
    {
        std::cout << "ScavTrap " << name << " cannot attack, it's destroyed!" << std::endl;
        return;
    }
    if (energyPoints <= 0)
    {
        std::cout << "ScavTrap " << name << " cannot attack, no energy left!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ScavTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " created by default constructor!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " created by param constructor!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}

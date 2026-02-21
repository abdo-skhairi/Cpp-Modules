#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavvy");

    std::cout << "\n--- Actions ---\n" << std::endl;

    clap.attack("Enemy1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    scav.attack("Enemy2");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "\n--- End of main ---\n" << std::endl;

    return 0;
}

#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");
    FragTrap frag("Fraggy");

    std::cout << "\n--- Actions ---\n" << std::endl;

    clap.attack("Enemy1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    frag.attack("Enemy2");
    frag.takeDamage(20);
    frag.beRepaired(10);
    frag.highFivesGuys();

    std::cout << "\n--- End of main ---\n" << std::endl;
    return 0;
}

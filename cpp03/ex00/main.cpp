#include "ClapTrap.hpp"

int main()
{
    ClapTrap defaultBot;
    ClapTrap alpha("Alpha");

    std::cout << "\n--- Actions ---\n" << std::endl;

    alpha.attack("Enemy1");
    alpha.takeDamage(5);
    alpha.beRepaired(3);

    for (int i = 0; i < 10; ++i)
        alpha.attack("Enemy2");

    defaultBot.takeDamage(15);
    defaultBot.beRepaired(5);

    std::cout << "\n--- End of main ---\n" << std::endl;

    return 0;
}

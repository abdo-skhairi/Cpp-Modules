#include "Zombie.hpp"

int main()
{
    randomChump("StackZombie");
    Zombie* heap = newZombie("HeapZombie");
    heap->announce();
    delete heap;
}

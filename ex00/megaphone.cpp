#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac < 2)
        return(1);
    int i = 1;
    int j = 0;
    while(av[i])
    {
        while(av[i][j])
        {
            if(av[i][j] <= 'z' && av[i][j] >= 'a')
            {
                std::cout << (char)std::toupper(av[i][j]);
            }
            else if(av[i][j] <= 'Z' && av[i][j] >= 'A')
            {
                std::cout << (char)std::tolower(av[i][j]);
            }
            else
            {
                std::cout << av[i][j];
            }
            j++;
        }
        i++;
    }
}

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return(0);
    }
    int i = 1;
    int j = 0;
    while(av[i])
    {
        j = 0;
        while(av[i][j])
        {
            if(av[i][j] && (av[i][j] <= 'z' && av[i][j] >= 'a'))
            {
                std::cout << (char)std::toupper(av[i][j]);
            }
            else
            {
                std::cout << av[i][j];
            }
            j++;
        }
        i++;
    }
    std::cout << "\n";
}

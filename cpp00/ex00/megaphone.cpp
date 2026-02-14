/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:50:10 by sabderra          #+#    #+#             */
/*   Updated: 2026/02/14 17:59:31 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
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

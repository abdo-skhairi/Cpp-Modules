/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:50:44 by sabderra          #+#    #+#             */
/*   Updated: 2026/02/14 17:59:48 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"


static int ft_cmp(std::string str1, std::string str2)
{
    int i = 0;
    int j = 0;

    while(str1[i] && std::isspace(str1[i]))
        i++;
    while(str1[i] && str2[j])
    {
        if(std::isspace(str1[i]))
            break;
        if(str1[i] != str2[j])
            return(1);
        i++;
        j++;
    }
    while(str1[i] && std::isspace(str1[i]))
        i++;
    if(str1[i] != str2[j])
        return(1);
    while(std::isspace(str1[i]) && str1[i])
        i++;
    if(str1[i])
        return(1);
    return(0);
}

int main()
{
    PhoneBook phonebook;
    std::string command;
    while (true) 
    {
        std::cout << "\nEnter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))
            break;
        if (!ft_cmp(command, "ADD"))
            phonebook.addContact();
        else if (!ft_cmp(command, "SEARCH"))
            phonebook.searchContact();
        else if (!ft_cmp(command, "EXIT"))
            return 0;
    }
    std::cout << std::endl;
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:19:06 by sabderra          #+#    #+#             */
/*   Updated: 2025/10/19 13:19:07 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

static int ft_cmp(std::string str1, std::string str2)
{
    int i = 0;
    int j = 0;
    while(std::isspace(str1[i]))
        i++;
    while(str1[i] && str2[j])
    {
        if(str1[i] != str2[j])
            return(1);
        i++;
        j++;
    }
    if(str1[i] != str2[j])
        return(1);
    while(std::isspace(str1[i]))
        i++;
    if(str1[i])
        return(1);
    return(0);
}

int main()
{
    PhoneBook phonebook;
    std::string command;
    while (true) {
        std::cout << "\nEnter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))
            break;
        if (!ft_cmp(command, "ADD"))
            phonebook.addContact();
        else if (!ft_cmp(command, "SEARCH"))
            phonebook.searchContact();
        else if (!ft_cmp(command, "EXIT"))
            break;
        else
            std::cout << "Invalid command.\n";
    }
    std::cout << "Goodbye!\n";
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:50:22 by sabderra          #+#    #+#             */
/*   Updated: 2026/02/14 21:04:36 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

static std::string get_input(const std::string& prompt)
{
    std::string input;
    int i;

    while (true)
    {
        input = "";
        std::cout << prompt;
        if (!std::getline(std::cin, input))
        {
            if (std::cin.eof()) 
            {
                std::cout << "\nCtrl-D detected. Exiting...\n";
                exit(0);
            }
        } 
        i = 0;
        while (i < (int)input.size() && std::isspace(input[i]))
            i++;
        if (i == (int)input.size())
        {
            std::cout << "Error: field cannot be empty or contain only spaces.\n";
            continue;
        }
        return input;
    }
}

static std::string format_field(const std::string str)
{
    int i = 0;
    std::string str2;

    while (i < (int)str.length())
    {
        if(str[i] != '\t')
            str2 += str[i];
        else
            str2 += ' ';
        i++;
    }
    if (str2.length() > 10)
        return str2.substr(0, 9) + ".";
    return str2;
}

int check_number(std::string   str)
{
    int i = 0;

    while(str[i] && std::isspace(str[i]))
        i++;
    if(str[i] && (str[i] == '-' || str[i] == '+'))
    {
        if(str[i] == '-')
            return 1;
        i++;
    }
    if(str[i] && !(std::isdigit(str[i])))
        return(1);
    while (str[i] && std::isdigit(str[i]))
        i++;
    while(str[i] && std::isspace(str[i]))
        i++;
    if(!str[i])
        return(0);
    while(str[i] && std::isspace(str[i]))
        i++;
    return(1);
}

void Contact::set_values()
{
    firstName = get_input("Enter first name: ");
    lastName = get_input("Enter last name: ");
    nickname = get_input("Enter nickname: ");
    while (1)
    {
        phoneNumber = get_input("Enter phone number: ");
        if(check_number(phoneNumber))
        {
            std::cout << "Number not valid" << std::endl;
            continue;
        }
        break;
    }
    darkestSecret = get_input("Enter darkest secret: ");
}

void Contact::display_in_small_format(int index)
{
    std::cout << std::setw(10) << index << "|"
              << std::setw(10) << format_field(firstName) << "|"
              << std::setw(10) << format_field(lastName) << "|"
              << std::setw(10) << format_field(nickname) << std::endl;
}

void Contact::display_contact()
{
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

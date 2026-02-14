/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:50:50 by sabderra          #+#    #+#             */
/*   Updated: 2026/02/14 17:50:53 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : contacts_counter(0), next_index(0) 
{}

void PhoneBook::addContact()
{
    Contact new_contact;

    new_contact.set_values();
    contacts[next_index] = new_contact;
    if (contacts_counter < 8)
        contacts_counter++;
    next_index = (next_index + 1) % 8;
    std::cout << next_index << std::endl;
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::displayContacts()
{
    if (contacts_counter == 0) {
        std::cout << "No contacts to display." << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    int i = 0;
    while(i < contacts_counter)
    {
        contacts[i].display_in_small_format(i);
        i++;
    }
}

void PhoneBook::searchContact()
{
    displayContacts();
    if (contacts_counter == 0)
        return;

    while (1)
    {
        std::string line;
        int index;

        std::cout << "Enter index: ";
        std::getline(std::cin, line);
        std::cout << std::endl;
        if (std::cin.eof())
        {
            std::cout << "\nCtrl-D detected. Exiting...\n";
            std::exit(0);
        }
        if (sscanf(line.c_str(), "%d", &index) != 1 || (check_number(line) == 1)) 
        {
            std::cout << "Invalid input \n";
            continue;
        }
        if (index < 0 || index >= contacts_counter)
        {
            std::cout << "Index out of range.\n";
            continue;
        }
        contacts[index].display_contact();
        break;
    }
}

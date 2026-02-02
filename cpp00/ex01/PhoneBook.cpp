/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:18:45 by sabderra          #+#    #+#             */
/*   Updated: 2026/02/02 23:07:09 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : contacts_counter(0), next_index(0) {}

void PhoneBook::addContact()
{
    Contact new_contact;
    new_contact.set_values();
    contacts[next_index] = new_contact;
    if (contacts_counter < 8)
        contacts_counter++;
    next_index = (next_index + 1) % 8;
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
    while (1)
    {
        if (contacts_counter == 0)
            return;
        int index;
        std::cout << "Enter index: ";
        if (!(std::cin >> index))
        {
            std::cout << "Invalid input\n";
            
        }
        std::cout << "\n";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (index < 0 || index >= contacts_counter) 
        {
            std::cout << "Index out of range: \n";
            continue;
        }
        contacts[index].display_contact();
        break;
    }
}

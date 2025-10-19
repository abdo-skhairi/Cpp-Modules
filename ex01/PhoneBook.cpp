/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:18:45 by sabderra          #+#    #+#             */
/*   Updated: 2025/10/19 13:18:46 by sabderra         ###   ########.fr       */
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
    for (int i = 0; i < contacts_counter; i++)
        contacts[i].display_in_small_format(i);
}

void PhoneBook::searchContact()
{
    displayContacts();
    if (contacts_counter == 0)
        return;
    std::cout << " ";
    int index;
    if (!(std::cin >> index)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input.\n";
        return;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (index < 0 || index >= contacts_counter) {
        std::cout << "Invalid index.\n";
        return;
    }
    contacts[index].display_contact();
}

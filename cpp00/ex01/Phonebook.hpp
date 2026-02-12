/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:19:16 by sabderra          #+#    #+#             */
/*   Updated: 2026/02/12 18:49:37 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <limits>
#include <cctype>
#include <cstdlib>
#include <cstdio>

class PhoneBook {
private:
    Contact contacts[8];
    int contacts_counter;
    int next_index;

public:
    PhoneBook();
    void addContact();
    void displayContacts();
    void searchContact();
};

#endif

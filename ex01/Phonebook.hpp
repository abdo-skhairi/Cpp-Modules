#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook{
    private:
        // Contact contacts[8];
        // int     contacts_counter;
        // int     next_index;
    public:
        void addContact(const Contact& new_contact);
        void displayContacts();
        void searchContact();
};

#endif
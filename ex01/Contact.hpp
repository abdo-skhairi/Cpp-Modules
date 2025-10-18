#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact{
    private:
        std::string First_name;
        std::string Last_name;
        std::string Nickname;
        std::string Phone_number;
        std::string Dark_secret;
    public:
        void set_values();
        void display_contact();
        void display_in_small_format(); //for SEARCH method
};

#endif
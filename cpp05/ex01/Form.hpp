#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
    private:
        const std::string name;
        bool  isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        ~Form();
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        std::string getName();
        bool getisSigned();
        int getGradeToSign() const;
        int getGradeToExecute() const;
};

#endif

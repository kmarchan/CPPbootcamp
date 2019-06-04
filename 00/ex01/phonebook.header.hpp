#include <iostream>

#ifndef PHONEBOOK_HEADER_H
# define PHONEBOOK_HEADER_H

class PhoneBook {
public:
    int            _index;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string login;
    std::string postalAddress;
    std::string email;
    std::string phoneNumber;
    std::string birthday;
    std::string favoriteMeal;
    std::string underwearColour;
    std::string darkestSecret;

	public: void search();
	public: std::string display(std::string str);
	public: void getAllData();
};

#endif
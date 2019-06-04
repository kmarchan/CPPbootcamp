#include <iostream>
#include <string>
#include "phonebook.header.hpp"

PhoneBook addContact(int i) {
    PhoneBook newBook;
    newBook._index = i;
    
    std::cout << "first name:";
    std::getline(std::cin, newBook.firstName);

    std::cout << "last name:";
    std::getline(std::cin, newBook.lastName);

    std::cout << "nickname:";
    std::getline(std::cin, newBook.nickName);

    std::cout << "login:";
    std::getline(std::cin, newBook.login);

    std::cout << "postalAddress:";
    std::getline(std::cin, newBook.postalAddress);

    std::cout << "email:";
    std::getline(std::cin, newBook.email);

    std::cout << "phoneNumber:";
    std::getline(std::cin, newBook.phoneNumber);

    std::cout << "birthday:";
    std::getline(std::cin, newBook.birthday);

    std::cout << "favoriteMeal:";
    std::getline(std::cin, newBook.favoriteMeal);

    std::cout << "underwearColour:";
    std::getline(std::cin, newBook.underwearColour);

    std::cout << "darkestSecret:";
    std::getline(std::cin, newBook.darkestSecret);
    return (newBook);
}


void search(PhoneBook contact[], int num) {
    for (int i = 0; i < num; i++)
    {
        contact[i].search();
    }
}

bool is_number(std::string str){
    if(str.length() == 1 && std::isdigit(str[0])) {
        return(true);
    } else {
        return(false);
    }
}

int main()
{
    std::string in;
    std::cout << "What is your request: Options are ADD, SEARCH and EXIT" << std::endl;
    PhoneBook phonebook[8];
    int i = 0;
    while (in != "EXIT")
    {
        std::getline(std::cin, in);
        if (in == "ADD") {
            if (i == 8) {std::cout << "Opps! Your your contact list is full" << std::endl;}
           else
           {
            phonebook[i] = addContact(i);
            i++;
           }
        }
        else if (in == "SEARCH") {
            std::cout << "searching.." << std::endl;
            search(phonebook, i);
            std::cout << "select contact by index:" << std::endl;
             std::getline(std::cin, in);
            if (is_number(in)){
                int index;
                index = std::stoi(in);
                if (index <= i){
                    phonebook[index].getAllData();
                }            
            }
        }
    }
}
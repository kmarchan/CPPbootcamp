#include <iostream>
#include <string>

class PhoneBook
{
    private:
        std::string display(std::string str) {
            int size = 0;
            int len = 10;

            std::string ret = "          ";
            if (str.length() >= 10) {
                for (int i = 0; i <= str.length() && i < 10; i++){
                    ret[i] = str[i];
                    size++;
                }
                ret[9] = '.';
            } else {
                len = len - str.length();
                for (int i = 0; i <= str.length() && i < 10; i++){
                    ret[len] = str[i];
                    len++;
                }
            }
            return (ret);
        }

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

public:
    void search() {
        std::cout << display(std::to_string(_index)) + " | " + display(firstName) + " | " + display(lastName) + " | " + display(nickName) + " |\n";
    }
    void getAllData() {
        std::cout<<"firstName:      "<<firstName
                 <<"\nlastName:       "<<lastName
                 <<"\nnickName:       "<<nickName
                 <<"\nlogin:          "<<login
                 <<"\npostalAddress:  "<<postalAddress
                 <<"\nemail:          "<<email
                 <<"\nphoneNumber:    "<<phoneNumber
                 <<"\nbirthday:       "<<birthday
                 <<"\nfavoriteMeal:   "<<favoriteMeal
                 <<"\nunderwearColour:"<<underwearColour
                 <<"\ndarkestSecret:  "<<darkestSecret
                 <<"\n";
    }
};

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
    for (size_t i = 0; i < num; i++)
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
        if (in == "SEARCH") {
            std::cout << "searching.." << std::endl;
            search(phonebook, i);
            std::cout << "select index:" << std::endl;
             std:getline(std::cin, in);
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
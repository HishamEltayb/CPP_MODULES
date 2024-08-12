#include <iostream>
#include <string>

class Contact {
protected:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string DarkestSecret;
    int PhoneNumber;
};

class PhoneBook : public Contact {
private:
    Contact contacts[8];  // Array of Contact objects
public:
    void add();
    void print_data();
};

void PhoneBook::add() {
    std::cout << "Enter First Name:" << std::endl;
    std::getline(std::cin, contacts[0].FirstName);  // Error: Can't access protected member
}

void PhoneBook::print_data() {
    std::cout << "The FirstName is :" << contacts[0].FirstName << std::endl;  // Error: Can't access protected member
}

int main() {
    PhoneBook book;
    book.add();
    book.print_data();
    return 0;
}

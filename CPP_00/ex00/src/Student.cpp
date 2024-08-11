#include "Student.hpp"

Student::Student(std::string name)
{
	std::cout << "Constructor has been called" << std::endl;
	Student::age = 0;
	Name = name;
	status = true;
};
Student::~Student()
{
	std::cout << "Destructor has been called" << std::endl;
};
int Student::get_age(void)
{
	return age;
};
void Student::set_age(int i)
{
	this->age = i;
};

void Student::print_info()
{
	std::cout << "Name is " + Name << std::endl;
	std::cout << "age is " << age << std::endl;
	std::cout << "status is " << status << std::endl;
};
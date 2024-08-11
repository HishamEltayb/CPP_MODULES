#include <iostream>
#include "Student.hpp"

int main()
{
	Student Aken("Aken");
	Student Hisham("Hisham");

	Aken.set_age(2);
	Aken.print_info();
	std::cout << "------------------------------------------"<< std::endl;
	Hisham.print_info();

	return (0);
}

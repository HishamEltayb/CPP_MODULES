#ifndef STUDENT_HPP
# define STUDENT_HPP

#include <iostream>

class Student
{
	private:
		std::string Name;
		bool status;
		int age;

	public:
		Student(std::string);
		~Student();
		int get_age(void);
		void set_age(int);
		void print_info(void);
};


#endif
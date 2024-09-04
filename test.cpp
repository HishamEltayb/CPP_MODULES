#include <iostream>
#include <string>





void debug(void)
{
	std::cout << "This is from inside the DEBUG function \n";
}
void info(void)
{
	std::cout << "This is from inside the INFO function \n";
}
void warning(void)
{
	std::cout << "This is from inside the WARNING function \n";
}
void error(void)
{
	std::cout << "This is from inside the ERROR function \n";
}
void finish(void)
{
	std::cout << "This is from inside the FINISH function \n";
}
int main(int ac, char **av)
{

	// std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", "FINISH"};
	// void (*func1[5]) (void);
	void (*func1) (void);
		func1 = debug;
		func1();
	// if (ac > 1)
	// {
	// int i = 0;
	// func1[0] = debug;
	// func1[1] = info;
	// func1[2] = warning;
	// func1[3] = error;
	// func1[4] = finish;


	// for (; av[1] && i < 4 && av[1] != levels[i]; i++)
	// 		;

	// func1[i]();
	// }
	// else
	// {
	// 	std::cout << "NO ARGUMENTS\n";
	// }
	

	return (0);
}
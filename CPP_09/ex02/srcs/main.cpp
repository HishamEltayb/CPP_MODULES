#include "PmergeMe.hpp"

int main(int argc, char* argv[])
{
    if (argc < 2)
	{
        std::cerr << "Usage: " << argv[0] << " <positive integers>" << std::endl;
        return 1;
    }

    try
	{
		PmergeMe sorter;
        sorter.parsing(argc, argv);
        sorter.sort();
    }
    catch (std::exception& e)
	{
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
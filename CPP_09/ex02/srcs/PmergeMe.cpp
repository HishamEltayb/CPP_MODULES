#include "PmergeMe.hpp"

/***************** Constructes and Destructors *****************/
PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& other) {*this = other;}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other)
	{
        vec = other.vec;
        lst = other.lst;
    }
    return *this;
}


/***************** Private Member Functions *****************/
bool PmergeMe::isDigit(std::string& str)
{
	for (size_t i = 0; i < str.size(); ++i)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

int PmergeMe::jacobsthal(int n)
{
    if (n == 0)
		return 0;
    if (n == 1)
		return 1;
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}


std::vector<int> PmergeMe::JacobsthalSequence(size_t n)
{
    std::vector<int> sequence;
    int i = 0;
    while (jacobsthal(i) < static_cast<int>(n))
	{
        sequence.push_back(jacobsthal(i));
        i++;
    }
    return sequence;
}


/***************** Public Member Functions *****************/
void PmergeMe::parsing(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++)
	{
		std::string str = argv[i];
		if (!isDigit(str) || str.empty())
			throw badInput();
        double num = std::strtod(str.c_str(),NULL);
		if (num < 0 || num != static_cast<int>(num))
			throw badInput();
       
		vec.push_back(num);
		lst.push_back(num);
    }

}

void PmergeMe::printElements() const
{
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::sort()
{
    clock_t startVec, endVec;
    clock_t startLst, endLst;
    double cpu_time_usedVec;
    double cpu_time_usedLst;

	std::cout << "Before: ";
	printElements();
	std::cout << "After: ";

	// Vector
    startVec = clock();
    vec = mergeInsertSort(vec);
    endVec = clock();

	// List
    startLst = clock();
    lst = mergeInsertSort(lst);
    endLst = clock();

    printElements();
    cpu_time_usedVec = ((double) (endVec - startVec)) / CLOCKS_PER_SEC;
    std::cout  << std::fixed << "Time to process a range of " << vec.size() 
              << " elements with std::vector : "  << cpu_time_usedVec  << " us" << std::endl;

    cpu_time_usedLst = ((double) (endLst - startLst)) / CLOCKS_PER_SEC;
    std::cout << std::fixed << "Time to process a range of " << lst.size() 
              << " elements with std::list : " << cpu_time_usedLst  << " us" << std::endl;
}


/***************** Template Member Functions *****************/
template <typename Container>
Container PmergeMe::mergeInsertSort(Container& container)
{
    if (container.size() <= 1)
		return container;

    std::vector<std::pair<int, int> > pairs = createPairs(container);

    for (size_t i = 0; i < pairs.size(); ++i)
	{
		if (pairs[i].second != -1 && pairs[i].first > pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
    }

    Container largerGroup;
    Container smallerGroup;
    for (size_t i = 0; i < pairs.size(); ++i)
	{
		if (pairs[i].second != -1)
		{
            largerGroup.push_back(pairs[i].second);
            smallerGroup.push_back(pairs[i].first);
        }
		else
            largerGroup.push_back(pairs[i].first);
    }
    largerGroup = mergeInsertSort(largerGroup);
    return insertSmallerElements(largerGroup, smallerGroup);
}

template <typename Container>
std::vector<std::pair<int, int> > PmergeMe::createPairs(const Container& container)
{
    std::vector<std::pair<int, int> > pairs;
    typename Container::const_iterator it = container.begin();
    while (it != container.end())
	{
        int first = *it++;
		if (it != container.end())
		{
            int second = *it++;
            pairs.push_back(std::make_pair(first, second));
        }
		else
            pairs.push_back(std::make_pair(first, -1));
    }
    return pairs;
}

template <typename Container>
Container PmergeMe::insertSmallerElements(const Container& sorted, Container smaller)
{
    Container result = sorted;
    if (smaller.empty())
        return result;

    typename Container::iterator firstIt = smaller.begin();
    typename Container::iterator insertPos = std::lower_bound(result.begin(), result.end(), *firstIt);
    result.insert(insertPos, *firstIt);
    smaller.erase(firstIt);
    std::vector<int> jacobsthalSeq = JacobsthalSequence(smaller.size());
    for (size_t i = 0; i < jacobsthalSeq.size(); ++i)
    {
        if (static_cast<unsigned long>(jacobsthalSeq[i]) >= smaller.size())
            break;

        typename Container::iterator it = smaller.begin();
        std::advance(it, jacobsthalSeq[i]);
        insertPos = std::lower_bound(result.begin(), result.end(), *it);
        result.insert(insertPos, *it);
        smaller.erase(it);
    }
    for (typename Container::iterator it = smaller.begin(); it != smaller.end();)
    {
        insertPos = std::lower_bound(result.begin(), result.end(), *it);
        result.insert(insertPos, *it);
        it = smaller.erase(it);
    }
    return result;
}

/***************** Exceptions *****************/
const char* PmergeMe::badInput::what() const throw()
{
	return (RED BOLD "Error: Invalid input" RESET);
}






/***************** Workflow *****************/

// 1. **Parsing Input**:
//    - The `parsing` function processes command-line arguments, ensuring each is a valid integer.
//    - Invalid input (non-numeric, negative, or non-integer values) throws a `badInput` exception.
//    - If valid, the integers are added to both `vec` (std::vector) and `lst` (std::list).

// Example Input: 5 3 4 2 1
// `vec` = [5, 3, 4, 2, 1]
// `lst` = [5, 3, 4, 2, 1]

// 2. **Print Elements (Before Sorting)**:
//    - The `printElements` function displays the contents of `vec`.
//    - At this stage, the elements are unsorted.
// Output: "Before: 5 3 4 2 1"

// 3. **Sorting**:
//    - Both `vec` and `lst` are sorted using the `mergeInsertSort` template function.
//    - The function operates as follows:

//    a. **Merge-Insertion Sort**:
//       - If the container size is 1 or less, it is already sorted and returned directly.
//       - For larger sizes:
//         i. **Create Pairs**:
//            - Elements are grouped into pairs using the `createPairs` function.
//            - Example: Pairs = [(5, 3), (4, 2), (1, -1)]
//         ii. **Sort Pairs**:
//            - Each pair is sorted such that the smaller element comes first.
//            - Example: Sorted Pairs = [(3, 5), (2, 4), (1, -1)]
//         iii. **Separate Groups**:
//            - Pairs are divided into two groups:
//              - `largerGroup` contains the second element of each pair (or the only element if no pair exists).
//              - `smallerGroup` contains the first element of each pair.
//            - Example:
//              `largerGroup` = [5, 4, 1]
//              `smallerGroup` = [3, 2]
//         iv. **Recursive Sort**:
//            - `largerGroup` is recursively sorted using `mergeInsertSort`.
//            - Example (after recursion):
//              `largerGroup` = [1, 4, 5]
//         v. **Insert Smaller Elements**:
//            - Elements in `smallerGroup` are inserted into their correct positions in the sorted `largerGroup`.
//            - This uses the Jacobsthal sequence to optimize the insertion order.
//            - Final sorted order: [1, 2, 3, 4, 5]

//    b. The `mergeInsertSort` function returns the fully sorted container.

// 4. **Print Elements (After Sorting)**:
//    - The sorted `vec` is printed using the `printElements` function.
// Output: "After: 1 2 3 4 5"

// 5. **Performance Measurement**:
//    - The time taken to sort `vec` and `lst` is measured using `clock()` and displayed.
//    - This gives a comparison of the performance of `std::vector` vs. `std::list` for this sorting algorithm.
// Example Output:
// "Time to process a range of 5 elements with std::vector : 0.000015 us"
// "Time to process a range of 5 elements with std::list : 0.000020 us"
#include "Production.h"


int main()
{
	Production p;
	bool result = false;
	std::vector <int> numbers = p.getSixNumbers();
	if (p.checkBetweenRangeZeroToFortySix(numbers))
	{
		std::cout << "All numbers are in the range 0-46" << std::endl;
	}
	else
	{
		std::cout << "Not all numbers are in the range 0-46" << std::endl;
	}

	if (p.checkForNoDuplicates(numbers))
	{
		std::cout << "There are no duplicate numbers" << std::endl;
	}
	else
	{
		std::cout << "There are Duplicate numbers" << std::endl;
	}
	return 0;
}

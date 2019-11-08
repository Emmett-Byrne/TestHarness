#include "Production.h"

std::vector<int> Production::getSixNumbers()
{
	std::cout << "Input 6 numbers" << std::endl;
	std::vector<int> numbers;

	for (int i = 0; i < 6; i++)
	{
		int newNum;
		std::cout << i + 1 << ": ";
		std::cin >> newNum;
		numbers.push_back(newNum);
	}

	return numbers;
}

bool Production::checkBetweenRangeZeroToFortySix(std::vector<int> vec)
{
	bool result = true;

	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] > 46 || vec[i] < 0)
		{
			result = false;
		}
	}

	return result;
}

bool Production::checkForNoDuplicates(std::vector<int> vec)
{
	bool result = true;

	for (int i = 0; i < vec.size() - 1; i++)
	{
		for (int j = i+1; j < vec.size(); j++)
		{
			if (vec[i] == vec[j])
			{
				result = false;
			}
		}
	}

	return result;
}

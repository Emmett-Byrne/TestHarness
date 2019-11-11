#include <iostream>
#include <assert.h>
#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;
	std::vector<int> numbers = { 0,1,2,3,4,5 };

	assert(numbers.size() == 6);
	assert(p.checkBetweenRangeZeroToFortySix(numbers) == true);
	assert(p.checkForNoDuplicates(numbers) == true);
	cin.get();
}
//
//
//
//

#include "string.hpp"
#include "string.cpp"

int main()
{
	String myString("baaaaaaaaacd");

	String newString("abcd");

	String anotherString("mm");

	anotherString.debugPrint(std::cout);
	newString += anotherString;
	newString.debugPrint(std::cout);
	std::cout << newString << std::endl;

	String addStr = myString + anotherString;
	std::cout << addStr << std::endl;
	bool a = addStr != myString;
	std::cout << a << std::endl;

	return 0;
}
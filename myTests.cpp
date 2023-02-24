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
	// anotherString += myString;
	anotherString.debugPrint(std::cout);
	newString += anotherString;
	newString.debugPrint(std::cout);

	return 0;
}
//
//
//
//

#include "string.hpp"
#include "string.cpp"

int main()
{
	String myString("baaaaaaaaacd");

	String newString("abcde");

	String anotherString("mm");

	String moreString("abcd");
	// char a = 'a';
	anotherString.debugPrint(std::cout);
	// newString += anotherString;
	newString.debugPrint(std::cout);
	std::cout << newString << std::endl;

	String addStr = myString + anotherString;
	std::cout << addStr << std::endl;
	bool a = addStr != myString;
	std::cout << a << std::endl;

	std::cout << (a <= moreString) << std::endl;
	std::cout << (a >= moreString) << std::endl;

	std::ifstream in;
	in.open("test.txt");
	if (!in)
	{
		std::cerr << "File not found: data1-1.txt" << std::endl;
		exit(1);
	}
	String aString;
	String bString;
	while (in >> aString >> bString)
	{
		std::cout << aString << " " << bString << std::endl;
	}
	in.close();
	return 0;
}
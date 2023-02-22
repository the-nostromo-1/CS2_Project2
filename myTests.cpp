//
//
//
//

#include "string.hpp"
#include "string.cpp"

int main()
{
    String myString("bbcd");
    myString.debugPrint(std::cout);
    std::cout << myString.length() << std::endl;
    std::cout << myString[0] << std::endl;
    myString[0] = 'a';
    std::cout << myString[0] << std::endl;

    String newString("abcd");
    std::cout << newString[0] << std::endl;
    if (myString == newString) { std::cout << "true" << std::endl; }
    String a = newString.substr(0, 3);
    std::cout << a[1] << std::endl;

    return 0;
}
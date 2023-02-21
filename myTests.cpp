//
//
//
//

#include "string.hpp"
#include "string.cpp"

int main()
{
    String myString("abcd");
    myString.debugPrint(std::cout);
    std::cout << myString.length() << std::endl;


    return 0;
}
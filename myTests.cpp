//
//
//
//

#include "string.hpp"
#include "string.cpp"

int main()
{
    String *myString = new String("baaacd");

    String *newString = new String("abcdef");

    String *anotherString = new String("mm");

    String *moreString = new String("abcd");

    bool a = anotherString == myString;
    std::cout << a << std::endl;

    std::cout << (anotherString <= moreString) << std::endl;
    std::cout << (newString >= moreString) << std::endl;
    std::cout << moreString[0] << std::endl;

    delete moreString;
    delete anotherString;
    delete myString;
    delete newString;

    // std::ifstream in;
    // in.open("test.txt");
    // if (!in)
    // {
    //     std::cerr << "File not found: data1-1.txt" << std::endl;
    //     exit(1);
    // }
    // String aString;
    // String bString;
    // while (in >> aString >> bString)
    // {
    //     std::cout << aString << " " << bString << std::endl;
    // }
    // in.close();

    return 0;
}

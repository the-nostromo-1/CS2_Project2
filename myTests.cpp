//
//
//
//

#include "string.hpp"
#include "string.cpp"

int main()
{
    String myString("baaacd");
    
    std::cout << "String one size: " << myString.getStringSize() << std::endl;
    //String newString("abcdef");

    String anotherString("mm");

    std::cout << "String two size: " << anotherString.getStringSize() << std::endl;
    //String moreString("abcd");

    //String cpyString = moreString; // testing copy constructor

    anotherString += myString;

    for (int i = 0; i < anotherString.length(); ++i)
    {
        std::cout << anotherString[i] << " ";
    }

    std::cout << myString.substr(1, 3) << std::endl;
    std::cout << std::endl;
    std::cout << "Capacity: " << anotherString.capacity() << std::endl;
    std::cout << "Length: " << anotherString.length() << std::endl;
    std::cout << "String Size: " << anotherString.getStringSize() << std::endl;
    std::cout << std::endl;

    // bool a = anotherString == myString; // testing equality operator
    // std::cout << a << std::endl;

    // int b = moreString.findch(1, 'c');
    // std::cout << b << std::endl;
    // std::cout << (anotherString <= moreString) << std::endl;
    // std::cout << (newString >= moreString) << std::endl;
    // std::cout << moreString[0] << std::endl;
    // std::cout << cpyString[0] << std::endl;

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

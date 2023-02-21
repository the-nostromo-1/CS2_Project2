//
// string.cpp
// David J Tinley
// 02/20/2023
//

#include "string.hpp"

//
// Class Constructors
//
String::String() // default constructor for empty string
{
    for (int i = 0; i < STRING_SIZE; ++i) { str[i] = 'x'; }
}

String::String(char newChar) : String() // string ('x')
{
    for (int i = 0; i < STRING_SIZE; ++i) { str[i] = newChar; }
}

String::String(const char charArray[]) : String() // string ('abcd')
{
    int i = 0;
    while (charArray[i] != '\0' && i < STRING_SIZE - 1)
    {
        str[i] = charArray[i];
        i++;
    }
    str[i] = '\0'; // adds the null terminator to the last 'i' in the array
}

//
// Class Methods
//
int String::capacity() const // max chars that can be stored
{

}

int String::length() const // Number of char in string
{
    int length = 0;
    while (str[length] != '\0') { ++length; }
    return length;
}

void String::debugPrint(std::ostream &out) const
{
    int length = 0;
    while (str[length] != '\0') { ++length; }
    for (int i = 0; i < length; ++i) { out << str[i] << " "; }
    std::cout << std::endl;
}

//
// Operator Overloads
//

char &String::operator[](int i) // Accessor/Modifier
{
    assert(i >= 0);
    assert(i <= STRING_SIZE -1);
    return str[i];
}

char String::operator[](int i) const // Accessor
{
    assert(i >= 0);
    assert(i <= STRING_SIZE - 1);
    return str[i];
}

bool String::operator==(const String &rhs) const
{
    for (int i = 0; i < STRING_SIZE; ++i)
    {
        if (str[i] != rhs.str[i]) { return false; }
    }
    return true;
}

bool String::operator<(const String &rhs) const
{
    for (int i = 0; i < STRING_SIZE; ++i)
    {
        if (str[i] > rhs.str[i]) { return false; }
    }
    return true;
}
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
    for (int i = 0; i < 1; ++i) { str[i] = newChar; }
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
    return 0;
}

int String::findch(int pos, char myChar) const // Location of character starting at a position
{
    int length = 0;
    while (str[length] != '\0') { ++length; }
    for (int i = pos; i < length; ++i)
    {
        if (str[i] == myChar) { return i; }
    }
    return -1;
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

String String::substr(int start, int finish) const // Sub from staring to ending positions
{
    String newSubString;
    if (start < 0) { start = 0; }
    if (finish < start) { return newSubString; }
    if (finish >= length()) { finish = (length() - 1); }
    int subTracker = 0;
    for (int i = start; i < finish; ++i)
    {
        newSubString[subTracker] = str[i];
        ++subTracker;
    }
    return newSubString;
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
    int i = 0;
    while ((str[i] != '\0') && (rhs.str[i] != '\0') && (str[i] == rhs.str[i])) { ++i; }
    return str[i] == rhs.str[i];
}

bool String::operator<(const String &rhs) const
{
    int i = 0;
    while ((str[i] != '\0') && (rhs.str[i] != '\0') && (str[i] == rhs.str[i])) { ++i; }
    return str[i] < rhs.str[i];
}


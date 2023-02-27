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
    for (int i = 0; i < STRING_SIZE; ++i)
    {
        str[i] = 0;
    }
}

String::String(char newChar) : String() // string ('x')
{
    str[0] = newChar;
    str[1] = 0;
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
int String::capacity() const { return (STRING_SIZE - 1); } // max chars that can be stored

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

int String::findstr(int start, const String &rhs) const
{
    for (int i = start; i <= length(); ++i)
    {
        if (substr(i, (i + rhs.length() - 1)) == rhs)
        {
            return i;
        }
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

bool operator!=(const String &lhs, const String &rhs)
{
    int i = 0;
    while ((lhs[i] != '\0') && (rhs[i] != '\0') && (lhs[i] == rhs[i])) { ++i; }
    return lhs[i] != rhs[i];
}

bool String::operator<(const String &rhs) const
{
    int i = 0;
    while ((str[i] != '\0') && (rhs.str[i] != '\0') && (str[i] == rhs.str[i])) { ++i; }
    return str[i] < rhs.str[i];
}

String operator+(String lhs, const String &rhs)
{
    String newString;
    int lhsLength = lhs.length();
    int rhsLength = rhs.length();
    for (int i = 0; i < lhsLength; ++i)
    {
        if ((lhsLength + i) >= STRING_SIZE) { break; }
        newString[i] = lhs[i];
    }
    int newOffset = newString.length();
    for (int j = 0; j < rhsLength; ++j)
    {
        if (newOffset >= STRING_SIZE) { break; }
        newString[newOffset + j] = rhs[j];
    }
    newString[newOffset + rhsLength] = '\0';
    return newString;
}

String &String::operator+=(const String &rhs)
{
    int offset = this->length(); // explicitly calling 'this' for understanding of function
    int rhsLength = rhs.length() + 1; // include null terminator
    for (int i = 0; i < rhsLength; ++i)
    {
        if ((offset + i) >= capacity()) { break; }
        str[offset + i] = rhs.str[i];
    }
    str[offset + rhsLength] = '\0'; // add null terminator
    return *this;
}

std::ostream &operator<<(std::ostream &out, const String &rhs)
{
    int i = 0;
    while (rhs.str[i] != '\0')
    { 
        out << rhs.str[i] << " ";
        ++i;
    }
    return out;
}

// std::istream &operator>>(std::istream &in, String &rhs)
// {
//     return in;
// }
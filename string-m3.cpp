//
// string.cpp V2
// David J Tinley
// 02/28/2023
//

#include "string.hpp"

//
// Class Constructors
//
String::String() // Default Constructor
{
    str = new char[1];
    str[0] = '\0';
    stringSize = 1;
}

String::String(char newChar) // Character Constructor
{
    str = new char[2];
    str[0] = newChar;
    str[1] = '\0';
    stringSize = 2;
}

String::String(const char charArray[]) // Character Array Constructor
{
    stringSize = 0;
    while (charArray[stringSize] != '\0') { ++stringSize; }
    ++stringSize;
    str = new char[stringSize];
    for (int i = 0; i < stringSize; ++i) { str[i] = charArray[i]; }
    str[stringSize-1] = '\0';
}

String::String(const String &rhs) // Copy Constructor
{
    stringSize = rhs.stringSize;
    str = new char[stringSize];
    for (int i = 0; i < stringSize; ++i) { str[i] = rhs.str[i]; }
}

String::~String() { delete str; } // Destructor

//
// Class Methods
//

int String::capacity() const { return (this->length()); } // max chars that can be stored

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
        if (substr(i, (i + rhs.length() - 1)) == rhs) { return i; }
    }
    return -1;
}

int String::length() const // Number of char in string
{
    int length = 0;
    while (str[length] != '\0') { ++length; }
    return length;
}

String String::substr(int start, int finish) const // Sub from staring to ending positions
{
    String newSubString;
    if (finish < start) { return newSubString; }
    if (finish > length()) { finish = length(); }

    newSubString.stringSize = (finish - start) + 1;
    newSubString.str = new char[newSubString.stringSize];

    int subTracker = 0;
    for (int i = start; i <= finish; ++i)
    {
        newSubString[subTracker] = str[i];
        ++subTracker;
    }

    newSubString.str[newSubString.stringSize] = '\0';
    return newSubString;
}

void String::swap(String &rhs)
{
    int tempSize;
    tempSize = rhs.stringSize;
    rhs.stringSize = stringSize;
    stringSize = tempSize;

    char *tempString;
    tempString = rhs.str;
    rhs.str = str;
    str = tempString;
}

std::vector<String> String::split(char splitChar) const
{
    String newString;
    
    
    return;
}

    //
    // Operator Overloads
    //

    char &String::operator[](int i) // Accessor/Modifier
{
    assert(i >= 0);
    return str[i];
}

char String::operator[](int i) const // Accessor
{
    assert(i >= 0);
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

bool operator==(const char charArray[], const String &rhs)
{
    int i = 0;
    while ((charArray[i] != '\0') && (rhs[i] != '\0') && (charArray[i] == rhs[i])) { ++i; }
    return charArray[i] == rhs[i];
}

bool operator==(char charParam, const String &rhs)
{
    int i = 0;
    while ((charParam != '\0') && (rhs[i] != '\0') && (charParam == rhs[i])) { ++i; }
    return charParam == rhs[i];
}

bool operator<(const char charArray[], const String &rhs)
{
    int i = 0;
    while ((charArray[i] != '\0') && (rhs[i] != '\0') && (charArray[i] == rhs[i])) { ++i; }
    return charArray[i] < rhs[i];
}

bool operator<(char charParam, const String &rhs)
{
    int i = 0;
    while ((charParam != '\0') && (rhs[i] != '\0') && (charParam == rhs[i])) { ++i; }
    return charParam < rhs[i];
}

bool operator<=(const String &lhs, const String &rhs)
{
    int i = 0;
    while ((lhs[i] != '\0') && (rhs[i] != '\0') && (lhs[i] == rhs[i])) { ++i; }
    return lhs[i] <= rhs[i];
}

bool operator>(const String &lhs, const String &rhs)
{
    int i = 0;
    while ((lhs[i] != '\0') && (rhs[i] != '\0') && (lhs[i] == rhs[i])) { ++i; }
    return lhs[i] > rhs[i];
}

bool operator>=(const String &lhs, const String &rhs)
{
    int i = 0;
    while ((lhs[i] != '\0') && (rhs[i] != '\0') && (lhs[i] == rhs[i])) { ++i; }
    return lhs[i] >= rhs[i];
}

bool String::operator<(const String &rhs) const
{
    int i = 0;
    while ((str[i] != '\0') && (rhs.str[i] != '\0') && (str[i] == rhs.str[i])) { ++i; }
    return str[i] < rhs.str[i];
}

String operator+(String lhs, const String &rhs) { return lhs += rhs; }

String &String::operator+=(const String &rhs)
{
    int newStringSize = this->length() + rhs.length() + 1;
    char *tempChar = new char[newStringSize];

    for (int i = 0; i < this->length(); ++i) { tempChar[i] = str[i]; }
    for (int i = 0; i < rhs.length(); ++i) { tempChar[this->length() + i] = rhs.str[i]; }

    tempChar[newStringSize - 1] = '\0';
    stringSize = newStringSize;
    delete[] str;
    str = tempChar;
    
    return *this;
}

String& String::operator=(String rhs) // Assignment operator overload
{
    swap(rhs);
    return *this;
}

std::ostream &operator<<(std::ostream &out, const String &rhs)
{
    return out << rhs.str;
}

std::istream &operator>>(std::istream &in, String &rhs)
{
    return in >> rhs.str;
}

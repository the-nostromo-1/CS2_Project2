//
// string.cpp V2
// David J Tinley
// 02/28/2023
//

#include "string.hpp"

///////////////////////////////////////////////////////
// Class Constructors
///////////////////////////////////////////////////////

String::String() { // Default constructor
  str = new char[1];
  str[0] = '\0';
  stringSize = 1;
}

String::String(char newChar) { // Character constructor
  str = new char[2];
  str[0] = newChar;
  str[1] = '\0';
  stringSize = 2;
}

// Character array constructor
String::String(const char charArray[]) {
  stringSize = 0;
  while (charArray[stringSize] != '\0') {
    ++stringSize;
  }
  ++stringSize;
  str = new char[stringSize];
  for (int i = 0; i < stringSize; ++i) {
    str[i] = charArray[i];
  }
  str[stringSize - 1] = '\0';
}

// Copy constructor
String::String(const String &rhs) {
  stringSize = rhs.stringSize;
  str = new char[stringSize];
  for (int i = 0; i < stringSize; ++i) {
    str[i] = rhs.str[i];
  }
}

// Destructor
String::~String() { delete[] str; }

///////////////////////////////////////////////////////
// Class Methods
///////////////////////////////////////////////////////

int String::capacity() const { // Max chars that can be stored
  return (this->length());
}

int String::findch(int pos, char myChar) const {
  int length = 0;
  while (str[length] != '\0') {
    ++length;
  }
  for (int i = pos; i < length; ++i) {
    if (str[i] == myChar) {
      return i;
    }
  }
  return -1;
}

int String::findstr(int start, const String &rhs) const {
  for (int i = start; i <= length(); ++i) {
    if (substr(i, (i + rhs.length() - 1)) == rhs) {
      return i;
    }
  }
  return -1;
}

// Number of char in string
int String::length() const {
  int length = 0;
  while (str[length] != '\0') {
    ++length;
  }
  return length;
}

// Sub from staring to ending positions
String String::substr(int start, int finish) const {
  String newSubString;
  if (finish < start) {
    return newSubString;
  }
  if (finish > length()) {
    finish = length();
  }

  newSubString.stringSize = (finish - start) + 1;
  newSubString.str = new char[newSubString.stringSize];

  int subTracker = 0;
  for (int i = start; i <= finish; ++i) {
    newSubString[subTracker] = str[i];
    ++subTracker;
  }
  newSubString.str[newSubString.stringSize] = '\0';
  return newSubString;
}

void String::swap(String &rhs) {
  int tempSize;
  tempSize = rhs.stringSize;
  rhs.stringSize = stringSize;
  stringSize = tempSize;

  char *tempString;
  tempString = rhs.str;
  rhs.str = str;
  str = tempString;
}

// std::vector<String> String::split(char splitChar) const {
//   std::vector<String> result; // creating String type vector
//   int currentPos = 0;         // start
//   while (findch(currentPos + 1, splitChar) != -1) {
//     if (splitChar == ' ') {
//       result.push_back(substr(currentPos, findch(currentPos, splitChar) -
//       1)); currentPos = (findch(currentPos, splitChar)) + 1;
//     } else {
//       result.push_back(substr(currentPos, findch(currentPos, splitChar) -
//       1)); currentPos = (findch(currentPos, splitChar)) + 1;
//       result.push_back("");
//     }
//   }
//   result.push_back(substr(currentPos, this->length()));
//   return result;
// }

std::vector<String> String::split(char splitChar) const {
  std::vector<String> result;
  int currentPos = 0;
  int nextPos;

  while ((nextPos = findch(currentPos, splitChar)) != -1) {
    result.push_back(substr(currentPos, nextPos - 1));
    currentPos = nextPos + 1;
  }
  result.push_back(substr(currentPos, length()));

  if (length() == splitChar) {
    result.push_back("");
  }
  return result;
}

///////////////////////////////////////////////////////
// Operator Overloads
///////////////////////////////////////////////////////

// Accessor/Modifier
char &String::operator[](int i) {
  assert(i >= 0);
  assert(i <= stringSize);
  return str[i];
}

// Accessor
char String::operator[](int i) const {
  assert(i >= 0);
  assert(i <= stringSize);
  return str[i];
}

bool String::operator==(const String &rhs) const {
  int i = 0;
  while ((str[i] != '\0') && (rhs.str[i] != '\0') && (str[i] == rhs.str[i])) {
    ++i;
  }
  return str[i] == rhs.str[i];
}

bool operator!=(const String &lhs, const String &rhs) {
  int i = 0;
  while ((lhs[i] != '\0') && (rhs[i] != '\0') && (lhs[i] == rhs[i])) {
    ++i;
  }
  return lhs[i] != rhs[i];
}

bool operator==(const char charArray[], const String &rhs) {
  int i = 0;
  while ((charArray[i] != '\0') && (rhs[i] != '\0') &&
         (charArray[i] == rhs[i])) {
    ++i;
  }
  return charArray[i] == rhs[i];
}

bool operator==(char charParam, const String &rhs) {
  int i = 0;
  while ((charParam != '\0') && (rhs[i] != '\0') && (charParam == rhs[i])) {
    ++i;
  }
  return charParam == rhs[i];
}

bool operator<(const char charArray[], const String &rhs) {
  int i = 0;
  while ((charArray[i] != '\0') && (rhs[i] != '\0') &&
         (charArray[i] == rhs[i])) {
    ++i;
  }
  return charArray[i] < rhs[i];
}

bool operator<(char charParam, const String &rhs) {
  int i = 0;
  while ((charParam != '\0') && (rhs[i] != '\0') && (charParam == rhs[i])) {
    ++i;
  }
  return charParam < rhs[i];
}

bool operator<=(const String &lhs, const String &rhs) {
  int i = 0;
  while ((lhs[i] != '\0') && (rhs[i] != '\0') && (lhs[i] == rhs[i])) {
    ++i;
  }
  return lhs[i] <= rhs[i];
}

bool operator>(const String &lhs, const String &rhs) {
  int i = 0;
  while ((lhs[i] != '\0') && (rhs[i] != '\0') && (lhs[i] == rhs[i])) {
    ++i;
  }
  return lhs[i] > rhs[i];
}

bool operator>=(const String &lhs, const String &rhs) {
  int i = 0;
  while ((lhs[i] != '\0') && (rhs[i] != '\0') && (lhs[i] == rhs[i])) {
    ++i;
  }
  return lhs[i] >= rhs[i];
}

bool String::operator<(const String &rhs) const {
  int i = 0;
  while ((str[i] != '\0') && (rhs.str[i] != '\0') && (str[i] == rhs.str[i])) {
    ++i;
  }
  return str[i] < rhs.str[i];
}

String operator+(String lhs, const String &rhs) { return lhs += rhs; }

// Concatenation operator overload
String &String::operator+=(const String &rhs) {
  int newStringSize = this->length() + rhs.length() + 1;
  char *tempChar = new char[newStringSize];

  for (int i = 0; i < this->length(); ++i) {
    tempChar[i] = str[i];
  }
  for (int i = 0; i < rhs.length(); ++i) {
    tempChar[this->length() + i] = rhs.str[i];
  }

  tempChar[newStringSize - 1] = '\0';
  stringSize = newStringSize;
  delete[] str;
  str = tempChar;

  return *this;
}

String &String::operator=(String rhs) {
  swap(rhs);
  return *this;
} // Assignment operator overload

std::ostream &operator<<(std::ostream &out, const String &rhs) {
  return out << rhs.str;
}

std::istream &operator>>(std::istream &in, String &rhs) {
  return in >> rhs.str;
}

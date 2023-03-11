//
//
//
//
//

#include "string.hpp"

int main() {
  {
    // Test
    String a("abcd");
    String b = a;

    // Verify
    assert(a == b);
    std::cout << "Copy constructor: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcd");
    String b = a;
    String c = b;

    // Verify
    assert(a == c);
    std::cout << "Copy constructor: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcd123");
    String b = a;
    String c = b;
    c += b;

    // Verify
    assert(a != c);
    std::cout << "Copy constructor: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcd123");
    String b = a;
    String c = b;
    c += b;

    // Verify
    assert(c == "abcd123abcd123");
    std::cout << "Copy constructor: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcd123");
    String b = a;
    String c = b;

    // Verify
    assert(c == a);
    std::cout << "Copy constructor: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcdefghijklmnopqrstuvwxyz");
    String b = a;
    String c = b;

    // Verify
    assert(c == "abcdefghijklmnopqrstuvwxyz");
    std::cout << "Copy constructor: Passed..." << std::endl;
  }

  std::cout << "Done testing copy constructor." << std::endl;
  std::cout << std::endl;
  return 0;
}
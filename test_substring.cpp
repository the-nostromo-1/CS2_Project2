//
//
//
//
//

#include "string.hpp"

int main() {
  {
    // Test
    String a("abc");
    String b = a.substr(0, 1);

    // Verify
    assert(b == "ab");
    std::cout << "Substring: Passed..." << std::endl;
  }

  {
    // Test
    String a("abc123abc");
    String b = a.substr(3, 5);

    // Verify
    assert(b == "123");
    std::cout << "Substring: Passed..." << std::endl;
  }

  {
    // Test
    String a("abc123abc abc");
    String b = a.substr(10, 12);

    // Verify
    assert(b == "abc");
    std::cout << "Substring: Passed..." << std::endl;
  }

  {
    // Test
    String a("abc123abc abc ");
    String b = a.substr(9, 13);

    // Verify
    assert(b == " abc ");
    std::cout << "Substring: Passed..." << std::endl;
  }

  {
    // Test
    String a("abc123abc abc ");
    String b = a.substr(9, 13);
    a = b.substr(0, 1);

    // Verify
    assert(a == " a");
    std::cout << "Substring: Passed..." << std::endl;
  }

  {
    // Test
    String a("abc123abc abc ");
    String b = a.substr(9, 13);
    a = b.substr(0, 1);
    String c = a;

    // Verify
    assert(c == " a");
    std::cout << "Substring: Passed..." << std::endl;
  }

  {
    // Test
    String a("987654321");
    String b = a.substr(0, 9);

    // Verify
    assert(b == "987654321");
    assert(b == a);
    std::cout << "Substring: Passed..." << std::endl;
  }

  std::cout << "Done testing substring." << std::endl;
  std::cout << std::endl;
  return 0;
}
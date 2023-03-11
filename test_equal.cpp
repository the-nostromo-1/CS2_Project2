//
//
//
//

#include "string.hpp"

int main() {
  {
    // Test
    String a;
    String b;

    // Verify
    assert(a == b);
    std::cout << "Equal operator: Passed..." << std::endl;
  }

  {
    // Test
    String a("a");
    String b("a");

    // Verify
    assert(a == b);
    std::cout << "Equal operator: Passed..." << std::endl;
  }

  {
    // Test
    String a("abc");
    String b("abc");

    // Verify
    assert(a == b);
    std::cout << "Equal operator: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcdefg");
    String b("abcdefg");

    // Verify
    assert(a == b);
    std::cout << "Equal operator: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcdefg");
    String b("abcdef");

    // Verify
    assert(a != b);
    std::cout << "Equal operator: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcde");
    String b("abcdef");

    // Verify
    assert(a != b);
    std::cout << "Equal operator: Passed..." << std::endl;
  }

  {
    // Test
    String a("a");
    String b("abcdefgh");

    // Verify
    assert(a != b);
    std::cout << "Equal operator: Passed..." << std::endl;
  }

  std::cout << "Done testing equality." << std::endl;
  std::cout << std::endl;
  return 0;
}
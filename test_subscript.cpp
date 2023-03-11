//
//
//
//

#include "string.hpp"

int main() {
  {
    // Test
    String a("abcd");

    // Verify
    assert(a[0] == 'a');
    std::cout << "Subscript: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcd");

    // Verify
    assert(a[3] == 'd');
    std::cout << "Subscript: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcd");

    // Verify
    assert(a[3] != 'c');
    std::cout << "Subscript: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcd");

    // Verify
    assert(a[4] == '\0');
    std::cout << "Subscript: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcdefghijklmnop");

    // Verify
    assert(a[3] != 'c');
    std::cout << "Subscript: Passed..." << std::endl;
  }

  {
    // Test
    String a("a");

    // Verify
    assert(a[1] == '\0');
    std::cout << "Subscript: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcdefghijklmnopqrstuvwxyz");

    // Verify
    assert(a[6] == 'g');
    assert(a[11] == 'l');
    std::cout << "Subscript: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcdefghijklmnopqrstuvwxyz");
    a[6] = 'z';

    // Verify
    assert(a[6] == 'z');
    assert(a[11] == 'l');
    std::cout << "Subscript: Passed..." << std::endl;
  }

  {
    // Test
    String a("abcdefghijklmnopqrstuvwxyz");
    a[6] = ' ';

    // Verify
    assert(a[6] == ' ');
    assert(a[11] == 'l');
    std::cout << "Subscript: Passed..." << std::endl;
  }

  std::cout << "Done testing subscript operator." << std::endl;
  std::cout << std::endl;
  return 0;
}
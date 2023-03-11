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
    String b;
    b.swap(a);

    // Verify
    assert(b == "abcd");
    std::cout << "Swap assignment: Passed..." << std::endl;
  }
  {
    // Test
    String a("abcdefghijklmnopqrstuvwxyz");
    String b;
    b.swap(a);

    // Verify
    assert(b == "abcdefghijklmnopqrstuvwxyz");
    std::cout << "Swap assignment: Passed..." << std::endl;
  }
  {
    // Test
    String a("abcdefghijklmnopqrstuvwxyz");
    String b;
    b.swap(a);
    String c;
    c.swap(a);

    // Verify
    assert(c == a);
    std::cout << "Swap assignment: Passed..." << std::endl;
  }
  {
    // Test
    String a("abcdefghijklmnopqrstuvwxyz");
    String b;
    b.swap(a);
    String c;
    c.swap(a);
    a.swap(b);

    // Verify
    assert(a == "abcdefghijklmnopqrstuvwxyz");
    std::cout << "Swap assignment: Passed..." << std::endl;
  }
  {
    // Test
    String a("abcdefghijklmnopqrstuvwxyz");
    String b;
    b.swap(a);
    String c;
    c.swap(a);
    a.swap(b);

    // Verify
    assert(a != c);
    std::cout << "Swap assignment: Passed..." << std::endl;
  }
  {
    // Test
    String a("abcdefghijklmnopqrstuvwxyz");
    String b("1");
    b.swap(a);
    String c;
    c.swap(a);
    a.swap(b);
    c.swap(b);

    // Verify
    assert(c == "");
    std::cout << "Swap assignment: Passed..." << std::endl;
  }

  std::cout << "Done testing swap assignment." << std::endl;
  std::cout << std::endl;
  return 0;
}
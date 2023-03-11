//
// Testing Defualt Constructor
// David J Tinley
// 02/25/2023
//

#include "string.hpp"

int main() {
  {
    // Testing
    String a;

    // Verify
    assert(a == "\0");
    std::cout << "Default constructor: Passed..." << std::endl;
  }

  {
    // Testing
    String a;

    // Verify
    assert(a != "1");
    std::cout << "Default constructor: Passed..." << std::endl;
  }

  std::cout << "Done testing default constructor." << std::endl;
  std::cout << std::endl;
  return 0;
}
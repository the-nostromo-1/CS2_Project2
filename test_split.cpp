//
//
//
//

#include "string.hpp"

int main() {
  {
    // Setup
    String str("this is a test");
    std::vector<String> result;

    // TEST
    result = str.split(' ');
    for (size_t i = 0; i < result.size(); ++i) {
      std::cout << result[i] << std::endl;
    }
    // VERIFY
    std::cout << "result.size() is " << result.size() << std::endl;
    assert(str == "this is a test");
    assert(result[0] == "this");
  }
  std::cout << std::endl;
  {
    // Setup
    String str("this-is-a-test");
    std::vector<String> result;

    // TEST
    result = str.split('-');
    for (size_t i = 0; i < result.size(); ++i) {
      std::cout << result[i] << std::endl;
    }
    // VERIFY
    assert(str == "this-is-a-test");
    std::cout << "result.size() is " << result.size() << std::endl;
    assert(result[3] == "");
  }
  {
    // Test
    String myString("one.two.three.four");
    std::vector<String> result;
    result = myString.split('.');
    for (size_t i = 0; i < result.size(); ++i) {
      std::cout << result[i] << std::endl;
    }

    // Verify
    assert(myString == "one.two.three.four");
    std::cout << "result.size() is " << result.size() << std::endl;
    assert(result[2] == "two");
  }
  {
    // Test
    String myString("0 1 2 3 4");
    std::vector<String> result;
    result = myString.split(' ');
    for (size_t i = 0; i < result.size(); ++i) {
      std::cout << result[i] << std::endl;
    }

    // Verify
    assert(myString == "0 1 2 3 4");
    std::cout << "result.size() is " << result.size() << std::endl;
    assert(result[2] == "2");
  }

  std::cout << "Done testing split." << std::endl;
  std::cout << std::endl;
  return 0;
}

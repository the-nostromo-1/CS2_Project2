//
//
//
//

#include "string.hpp"

int main()
{
    {
        // Test
        String a("a");
        // Verify
        assert(a == "a");
        std::cout << a << "== a: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefgh");
        // Verify
        assert(a == "abcdefgh");
        std::cout << a << "== a b c d e f g h: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnop");
        // Verify
        assert(a == "abcdefghijklmnop");
        std::cout << a << "== a b c d e f g h i j k l m n o p: Passed..." << std::endl;
    }

    {
        // Test
        String a("abc");
        // Verify
        assert(a != "abcdefgh");
        std::cout << a << "!= a b c d e f g h: Passed..." << std::endl;
    }

    std::cout << "Done testing default constructor" << std::endl;
    return 0;
}
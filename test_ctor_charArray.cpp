//
// Testing character array constructor
// David J Tinley
// 02/26/2023
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

    {
        // Test
        String a("abcdefgh");
        // Verify
        assert(a != "abc");
        std::cout << a << "!= a b c: Passed..." << std::endl;
    }

    {
        // Test
        String a("ab");
        // Verify
        assert(a != "ba");
        std::cout << a << "!= b a: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnopqrstuvwxyz");
        // Verify
        assert(a == "abcdefghijklmnopqrstuvwxyz");
        std::cout << a << "== a b c d e f g h i j k l m n o p q r s t u v w x y z: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcd");
        // Verify
        assert(a != "dcba");
        std::cout << a << "!= d c b a: Passed..." << std::endl;
    }

    std::cout << "Done testing character array constructor." << std::endl;
    return 0;
}
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
        std::cout << "Character array: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefgh");
        // Verify
        assert(a == "abcdefgh");
        std::cout << "Character array: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnop");
        // Verify
        assert(a == "abcdefghijklmnop");
        std::cout << "Character array: Passed..." << std::endl;
    }

    {
        // Test
        String a("abc");
        // Verify
        assert(a != "abcdefgh");
        std::cout << "Character array: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefgh");
        // Verify
        assert(a != "abc");
        std::cout << "Character array: Passed..." << std::endl;
    }

    {
        // Test
        String a("ab");
        // Verify
        assert(a != "ba");
        std::cout << "Character array: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnopqrstuvwxyz");
        // Verify
        assert(a == "abcdefghijklmnopqrstuvwxyz");
        std::cout << "Character array: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcd");
        // Verify
        assert(a != "dcba");
        std::cout << "Character array: Passed..." << std::endl;
    }

    std::cout << "Done testing character array constructor." << std::endl;
    std::cout << std::endl;
    return 0;
}
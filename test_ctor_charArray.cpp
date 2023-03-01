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
        std::cout << a << " == a: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefgh");
        // Verify
        assert(a == "abcdefgh");
        std::cout << a << " == abcdefgh: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnop");
        // Verify
        assert(a == "abcdefghijklmnop");
        std::cout << a << " == abcdefghijklmnop: Passed..." << std::endl;
    }

    {
        // Test
        String a("abc");
        // Verify
        assert(a != "abcdefgh");
        std::cout << a << " != abcdefgh: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefgh");
        // Verify
        assert(a != "abc");
        std::cout << a << " != abc: Passed..." << std::endl;
    }

    {
        // Test
        String a("ab");
        // Verify
        assert(a != "ba");
        std::cout << a << " != ba: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnopqrstuvwxyz");
        // Verify
        assert(a == "abcdefghijklmnopqrstuvwxyz");
        std::cout << a << " == abcdefghijklmnopqrstuvwxyz: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcd");
        // Verify
        assert(a != "dcba");
        std::cout << a << " != dcba: Passed..." << std::endl;
    }

    std::cout << "Done testing character array constructor." << std::endl;
    std::cout << std::endl;
    return 0;
}
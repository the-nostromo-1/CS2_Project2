//
//
//
//

#include "string.hpp"

int main()
{
    {
        // Test
        String a;
        String b("a");

        // Verify
        assert(a < b);
        std::cout << "Less than: Passed..." << std::endl;
    }

    {
        // Test
        String a("a");
        String b("b");

        // Verify
        assert(a < b);
        std::cout << "Less than: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcd");
        String b("abcdefgh");

        // Verify
        assert(a < b);
        std::cout << "Less than: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnopqrstuvwxy");
        String b("abcdefghijklmnopqrstuvwxyz");

        // Verify
        assert(a < b);
        std::cout << "Less than: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijkmnopqrstuvwxyz");
        String b("abcdefghijklmnopqrstuvwxyz");

        // Verify
        assert(b < a);
        std::cout << "Less than: Passed..." << std::endl;
    }

    {
        // Test
        String a("b");
        String b("abcdefghijklmnopqrstuvwxyz");

        // Verify
        assert(b < a);
        std::cout << "Less than: Passed..." << std::endl;
    }
    
    std::cout << "Done testing less than operator." << std::endl;
    std::cout << std::endl;
    return 0;
}
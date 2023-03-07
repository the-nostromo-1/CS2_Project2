//
//
//
//
//

#include "string.hpp"

int main()
{
    {
        // Test
        String a("abcd");

        // Verify
        assert(a.findch(0, 'c') == 2);
        std::cout << "Find Character: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcd");

        // Verify
        assert(a.findch(0, 'a') == 0);
        std::cout << "Find Character: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcd");

        // Verify
        assert(a.findch(1, 'd') == 3);
        std::cout << "Find Character: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcd");

        // Verify
        assert(a.findch(0, 'a') == 0);
        std::cout << "Find Character: Passed..." << std::endl;
    }

    {
        // Test
        String a("");

        // Verify
        assert(a.findch(0, 'a') != 0);
        std::cout << "Find Character: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcd1");

        // Verify
        assert(a.findch(0, '1') == 4);
        std::cout << "Find Character: Passed..." << std::endl;
    }

    std::cout << "Done testing find character." << std::endl;
    std::cout << std::endl;
    return 0;
}
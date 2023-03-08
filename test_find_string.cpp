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
        String a("abcdefg");
        String b("bc");

        // Verify
        assert(a.findstr(0, b) == 1);
        std::cout << "Find string: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefg");
        String b("bc");

        // Verify
        assert(a.findstr(0, b) != 0);
        std::cout << "Find string: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnop");
        String b("efghijkl");

        // Verify
        assert(a.findstr(2, b) == 4);
        std::cout << "Find string: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnopqrstuvwxyz");
        String b("qrstuv");

        // Verify
        assert(a.findstr(0, b) == 16);
        std::cout << "Find string: Passed..." << std::endl;
    }

    {
        // Test
        String a("123456789");
        String b("34");

        // Verify
        assert(a.findstr(0, b) == 2);
        std::cout << "Find string: Passed..." << std::endl;
    }

    {
        // Test
        String a("123456789");
        String b("23456789");

        // Verify
        assert(a.findstr(0, b) == 1);
        std::cout << "Find string: Passed..." << std::endl;
    }

    std::cout << "Done testing find string." << std::endl;
    std::cout << std::endl;
    return 0;
}
//
// Testing character constructor
// David J Tinley
// 02/25/2023
//

#include "string.hpp"

int main()
{
    {
        // Test
        String a("a");
        // Verify
        assert(a == "a");
        std::cout << "Character constructor: Passed..." << std::endl;
    }

    {
        // Test
        String a("a");
        // Verify
        assert(a != "b");
        std::cout << "Character constructor: Passed..." << std::endl;
    }

    {
        // Test
        String a("z");
        // Verify
        assert(a == "z");
        std::cout << "Character constructor: Passed..." << std::endl;
    }

    {
        // Test
        String a("z");
        // Verify
        assert(a != "a");
        std::cout << "Character constructor: Passed..." << std::endl;
    }

    std::cout << "Done testing character constructor." << std::endl;
    std::cout << std::endl;
    return 0;
}
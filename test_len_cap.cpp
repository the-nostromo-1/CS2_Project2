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
        assert(a.capacity() == 4);
        assert(a.length() == 4);
        std::cout << "Capacity: Passed..." << std::endl;
        std::cout << "Length: Passed..." << std::endl;
    }

    {
        // Test
        String a("a");
        String b("abcdefghijklmnop");

        // Verify
        assert(a.capacity() == 1);
        assert(a.length() == 1);
        assert(b.capacity() == 16);
        assert(b.length() == 16);
        std::cout << "Capacity: Passed..." << std::endl;
        std::cout << "Length: Passed..." << std::endl;
    }

    std::cout << "Done testing length and capacity functions." << std::endl;
    std::cout << std::endl;
    return 0;
}
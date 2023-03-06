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
        std::cout << "Capacity and Length: Passed..." << std::endl;
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
        std::cout << "Capacity and Length: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnop");
        String b("abcdefghijklmnop");

        // Verify
        assert(a.capacity() == 16);
        assert(a.length() == 16);
        assert(b.capacity() == 16);
        assert(b.length() == 16);
        std::cout << "Capacity and Length: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnop");
        String b("abcdefghijklmnop");
        String c = a + b;

        // Verify
        assert(a.capacity() == 16);
        assert(a.length() == 16);
        assert(b.capacity() == 16);
        assert(b.length() == 16);
        assert(c.length() == 32);
        assert(c.capacity() == 32);
        std::cout << "Capacity and Length: Passed..." << std::endl;
    }

    {
        // Test
        String a("a");
        String b("abcdefghijklmnop");
        String c = a + b;

        // Verify
        assert(a.capacity() == 1);
        assert(a.length() == 1);
        assert(b.capacity() == 16);
        assert(b.length() == 16);
        assert(c.length() == 17);
        assert(c.capacity() == 17);
        std::cout << "Capacity and Length: Passed..." << std::endl;
    }

    {
        // Test
        String a("a");
        String b("abcdefghijklmnop");
        String c; 
        c += a;

        // Verify
        assert(a.capacity() == 1);
        assert(a.length() == 1);
        assert(b.capacity() == 16);
        assert(b.length() == 16);
        assert(c.length() == 1);
        assert(c.capacity() == 1);
        std::cout << "Capacity and Length: Passed..." << std::endl;
    }
    std::cout << "Done testing length and capacity functions." << std::endl;
    std::cout << std::endl;
    return 0;
}

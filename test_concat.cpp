//
//
//
//

#include "string.hpp"

int main()
{
    {
        // Test
        String a ("a");
        String b ("b");
        a += b;

        // Verify
        assert(a == "ab");
        std::cout << "String concatenation: Passed..." << std::endl;
    }

    {
        // Test
        String a("ab");
        String b("bb");
        a += b;

        // Verify
        assert(a == "abbb");
        std::cout << "String concatenation: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnop");
        String b("bb");
        a += b;

        // Verify
        assert(a == "abcdefghijklmnopbb");
        std::cout << "String concatenation: Passed..." << std::endl;
    }

    {
        // Test
        String a("a");
        String b("bcdefghijklmnopqrstuvwxyz");
        a += b;

        // Verify
        assert(a == "abcdefghijklmnopqrstuvwxyz");
        std::cout << "String concatenation: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnopqrstuvwxyz");
        String b("abcdefghijklmnopqrstuvwxyz");
        a += b;

        // Verify
        assert(a == "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz");
        std::cout << "String concatenation: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnopqrstuvwxyz");
        String b("abcdefghijklmnopqrstuvwxyz");
        a += b;
        String c("abcdefghijklmnopqrstuvwxyz");
        c += a;

        // Verify
        assert(c == "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz");
        std::cout << "String concatenation: Passed..." << std::endl;
    }

    {
        // Test
        String a("abcdefghijklmnopqrstuvwxyz");
        String b("abcdefghijklmnopqrstuvwxyz");
        a += b;
        String c("abcdefghijklmnopqrstuvwxyz");
        c += a;
        a += c;

        // Verify
        assert(c == "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz");
        assert(a == "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz");
        std::cout << "String concatenation: Passed..." << std::endl;
    }

    std::cout << "Done testing String concatenation." << std::endl;
    std::cout << std::endl;
    return 0;
}
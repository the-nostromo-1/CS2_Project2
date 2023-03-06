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
        std::ifstream in;
        in.open("test.txt");
        if (!in)
        {
            std::cerr << "File not found: test.txt" << std::endl;
            exit(1);
        }
        String a;
        String b;
        while (in >> a >> b) { assert(a == "test"); assert(b == "test1"); }
        in.close();
        // Verify
        std::cout << "Input operator: Passed..." << std::endl;
    }

    {
        // Test
        std::ifstream in;
        in.open("test1.txt");
        if (!in)
        {
            std::cerr << "File not found: test1.txt" << std::endl;
            exit(1);
        }
        String a;
        String b;
        while (in >> a >> b) { assert(a == "test"); assert(b == "test1"); }
        in.close();
        // Verify
        std::cout << "Input operator: Passed..." << std::endl;
    }

    {
        // Test
        std::ifstream in;
        in.open("test2.txt");
        if (!in)
        {
            std::cerr << "File not found: test2.txt" << std::endl;
            exit(1);
        }
        String a;
        String b;
        String c;
        String d;
        while (in >> a >> b >> c >> d)
        {
            assert(a == "test");
            assert(b == "test1");
            assert(c == "test3");
            assert(d == "test4");
        }
        in.close();
        // Verify
        std::cout << "Input operator: Passed..." << std::endl;
    }

    {
        // Test
        std::ifstream in;
        in.open("test3.txt");
        if (!in)
        {
            std::cerr << "File not found: test2.txt" << std::endl;
            exit(1);
        }
        String a;
        String b;
        String c;
        String d;
        while (in >> a >> b >> c >> d)
        {
            assert(a == "1.one");
            assert(b == "2.two");
            assert(c == "3.three");
            assert(d == "4.four");
        }
        in.close();
        // Verify
        std::cout << "Input operator: Passed..." << std::endl;
    }

    std::cout << "Done testing input operator." << std::endl;
    std::cout << std::endl;
    return 0;
}
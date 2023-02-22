
# CS 23001 Computer Science II: Data Structures & Abstraction

Programming Project #2

Spring 2023

Objectives:
-Use a well developed ADT class which utilizes operator overloading.
-Use dynamically allocated arrays.

Problem:
The Apache web server produces information detailing web page accesses, this information is stored in a log file in the Apache Common log file format. The assignment is to develop a program to process this log file and keep track of the different types of log entries.

Requirements:

    You CANNOT use the C++ standard string or any other libraries for this assignment, except where specified.
    You must use your ADT string for the later parts of the assignment.
    using namespace std; is stricly forbiden. As are any global using statements.
    Name the folder for this project: string (please use all lower case letters).
    Milestone 1 (25pts)
        Implementation:
            Create an ADT String using the class construct. It will be a NULL (zero) terminating charater array.
            Note: C++ has a standard type called string so you should not use this name. Use String instead.
            Please name all your files using only lower case letters.
            Use the provided specification (svn/shared/project2/string-mile1.hpp) for naming your class and methods. Rename this file to string.hpp. A test suite will be provided in Part 2 that uses this interface to test your string class.
            Use a fixed sized array of char for storage with a max capacity based on a constant e.g., const int STRING_SIZE = 256; This array will store the characters along with the NULL (0) terminator.
            Implement the constructor functions (i.e., for char[] and char).
            Overload += and + as concatenation
            Overload all the relational operators (==, <, >, etc.).
            All overloaded operators must work for all variations (string, string), (string, char[]), (char[], string), etc.
            Implement the methods:
                operator[](int) - both accessor and modifier versions
                length() - returns number of characters in string
                capacity() - returns the max number of characters that can be stored in the string
                substr(int start, int end) - returns the sub string from start to end positions (inclusive)
                findch(int start, char ch) - returns location of ch at or after start, returns -1 if not found
                findstr(int start, cosnt String& str) - returns the location of str at or after start, returns -1 if not found.
                Overload both I/O operators - Input should read in one word at a time. The input operator for char[] works that way and can be used.
        Testing:
            Develop a set of test cases, using asserts, for each of the operators and methods of the String class.
            Write test cases first. Testing must be thorough. You will be relying on the string to be correct.
            The command make tests will build and run the unit tests.
            After each function passes a test, commit your work to svn with a message such as "Constructor tests passed".
            Your string class will be tested on a set of cases developed by the instructors. You will be graded on how well you pass the instructor tests. These tests cover the required constructors and operators.
        For grading:
            All .hpp/cpp files must be committed to svn.
            All test cases must be committed to svn.
            All data files must be committed to svn.
            Do NOT commit: .o files, executables, any temparay files (.save) - you will be marked down for this.
    Milestone 2 (25pts)
        Implementation:
            Re-implement your String class to use a dynamically allocated array for storage. Just as in the previous version, it will be a NULL terminating charater array.
            Use the provided specification (svn/shared/project2/string-mile2.hpp) for naming your class and methods Rename this to string.hpp. You can rename the M1 version to string-m1.hpp.
            This dynamic version of the String will only allocate exactly the amount of memory necessary to store the charaters. That is, the length will be the same as the capacity. However, the size of the dynamic array needs to have an extra char for the NULL terminator.
            You will need to re-write your constructors to allocate the correct amount of memory.
            The default constructor will allocate an array of size 1 for the empty string. The other constructors will allocate memory as needed. For example for String str("abc"); str.capacity() == 3, str.length() == 3, and str.stringSize == 4.
            For String(char), make sure to check for input of '\0'
            Implement a destructor, copy constructor, constant time swap, and assignment operator for your ADT.
            Update (concatenation) += to deal with the dynamic aspects.
            Update substr to deal with dynamic aspects
        Testing:
            Re-run the tests you built from Milestone 1. Write additional tests for the methods (ctors, assign, etc.) developed for this milestone.
            Write test cases first. Testing must be thorough. You will be relying on the String to be correct.
            The command make tests will build and run the unit tests.
            After each function passes a test, commit your work to svn with an appropriate message.
            A testing oracle is also provided. These are a set of test cases for a large part of the string class functionality. You need to make sure that the test cases you develop are as complete as the provided oracle.
            The command make oracle will build and run the oracle tests. You do not have access to the source code for the oracle tests.
            You must use the specification for String provided in string-mile2.hpp to use the test oracle.
            The oracle checks all the constructors and operators in String.
            If you add additional member variables to String, the tests will not work properly.
        For grading:
            Same requirements for milestone 1
            The testoracles folder and all .o files in that folder must be committed to svn.
            The testoracles only work on wasp/hornet. They are compiled on that platform only.
    Milestone 3 (25 pts)
        Implementation:
            You will use std::vector<> (need to include <vector>) for storing the results of parsing the input data.
            For your String class, implement a method std::vector<String> String::split(char) const;
            This method will return a vector of String split up based on a supplied character. For example:
                s = "abc ef gh", then s.split(' ') returns a vector with three strings: { "abc", "ef", "gh" }
                s = "-a--b-", then s.split('-') returns a vector with five strings: { "", "a", "", "b", "" }, three of which are empty string.
            The findch() and substr() operators should be used to implement this method.
        Testing:
            Write additional test cases for your split method (test_split.cpp).
            Make sure these tests demostrate that the method work properly.
            There is a oracle test for split. Edit the Makefile to have it run.
    Milestone 4 (25 pts)
        Implementation:
            See the supplied source code and data files in the shared folder in svn. logentry.cpp defines an ADT for logEntry. You will need to add functionality to this class (mainly constructors) to solve the problem. logview.cpp is the main and compiles and runs as is. You can modify this if needed.
            For each line in the log file split the line on blanks. This should result in 10 strings.
            If the entry is invalid (not 10 strings), store a blank logEntry.
            For all valid entries you will need to do further processing and properly construct the logEntry data structure. See logentry.hpp
        Testing:
            Write a function (called parse) to read all the lines from the file and create a logEntry object for each line. This function will return a vector of logEntry's. See code in svn/shared/project2/.
            You will need to use one of the methods on std::istream (get(char&), getline(char*, int)) to read in until the end of line. For example: in.getline(temp, 200); will read in one line from the file (upto a eoln character) that has a max size of 200 characters.
            Write a function that given the vector of logEntry's computes the total number of bytes in all the entries.
            Write a function that given the vector of logEntry's prints out the host member of each log entry (one per line).
            See the supplied main (logview.cpp). It takes a file name and an option as command line parameters. The program opens the file name given on the command line and read from that file. Based on the command line options it will:
                Print all the logEntry entries (neatly one per line).
                Print the total number of bytes (last number) of all the logs.
                Print the host (IP address) for each logEntry (one per line).
            The command make logview will build and run this program.
            Your program should work on all the provided input file(s).
            Data file(s) are in svn/shared/project2/ log_1_tiny.txt, log_2_small.txt, and log3_medium.txt.
            Additionally there is a VERY large data file (log_4_large.txt) at web.cs.kent.edu/~jmaletic/data/. DO NOT copy this into subversion as they it is very large. The direct path is /users/kent/jmaletic/public_html/data/log_4_large.txt

Challenge (Required for Honors Students): - 10 pts extra credit on this project

    Deteremine how many unique IP addresses are in the log file
    Create a new option ("ip") in logview.cpp that: Prints a list of each unique IP address (one per line) and prints the total number of unique IP addresses found
    You may use std::map to solve this problem
    Write a short description of how you solved the problem

Other Requirements:

    You must have a separate specification file (.hpp), implementation file (.cpp), and main file.
    Your program will be graded on programming and commenting style as well as the implementation of your ADT.
    Include all source code files in svn.
    You can NOT use a pre-defined or built in class (other than std::vector) to solve this problem.
    See the grading policy for other requirements.

URL: <http://www.cs.kent.edu/~jmaletic/CS23001/programs/proj2.html>
Last update: Tue Feb 14 13:50:55 2023 EST

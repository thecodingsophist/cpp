// a small C++ program <-- this is a comment, it is precursed by two backslashes, like in javascript

// include allows for standard libraries, iostream is the library that allows for input <--> output, it is enclosed in angle brackets (< and >)
// this standard header allows for the defined libraries to be available for use in the program
#include <iostream>

// function: has name and can be called by its name for uses
// the value to be returned is the first part of the function, which makes sense b/c the most important part of the function is what it will do and return
// int describes integers
int main()
// curly braces tells the program that whatever occurs between them should be treated as a unit
// the left marks the beginning, the right marks the end
// when there are two or more statements, they are treated in the order in which they appear 
{
    // output operator is <<
    // a namespace is a collection of related names
    // standard library uses std to contain all the names it defines
    // ex: iostream standard header defines the names cout and endl
    // std::cout is the standard output stream
    // std::endl ends the current line of output, anything after would be on the next line
    std::cout << "Hello World" << std::endl;
    // return ends execution of function in which it appears, every return statement must return a type that is defined at the beginning of the function
    return 0;
}

// other worthwhile mentions: << can be a manipulator, :: and {} are a scope operators

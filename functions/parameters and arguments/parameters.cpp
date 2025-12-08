// Information can be passed to functions as a parameter. Parameters act as variables inside the function.
// Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma
#include <iostream>
#include <string>
using namespace std;

string theOmillos(string firstName)
{
    string lastName = "Omillo";
    string fullName = firstName + lastName;
    return fullName;
}

int main()
{
    theOmillos("Eugene \n");
    theOmillos("Charles \n");
    theOmillos("Salome \n");
    theOmillos("Humphrey \n");

    return 0;
}

// The following example has a function that takes a string called firstName as parameter
// When the function is called, we pass along a first name, which is used inside the function to print the full name

// When a parameter is passed to the function, it is called an argument.
// So, from the example above : firstName is a parameter, while Eugene, Charles, Salome and Humphrey are arguments.
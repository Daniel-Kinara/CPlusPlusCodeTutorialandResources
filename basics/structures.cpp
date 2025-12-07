// Structures (also called structs) are a way to group several related variables into one place.
// Each variable in the structure is known as a member of the structure.
// Unlike an array, a structure can contain many different data types: int, string, bool, etc.
// To create a structure, use the struct keyword and declare each of its members inside curly braces.
// After the declaration, specify the name of the structure variable
#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct
    {
        int myNum;
        string myString;
    } myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";
    return 0;
}
// cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

#include <iostream>
using namespace std;

int main()
{

    string name;
    string gender;
    int age;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your gender: ";
    cin >> gender;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Your name is: " << name << "Your gender is: " << gender << "Your age is: " << age << endl;

    return 0;
}

// Both cin and cout belongs to the <iostream> library, which is short for standard input / output streams.
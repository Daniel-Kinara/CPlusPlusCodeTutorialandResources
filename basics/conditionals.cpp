// You can use these conditions to perform different actions for different decisions.
// Use if to specify a block of code to be executed, if a specified condition is true
// Use else to specify a block of code to be executed, if the same condition is false
// Use else if to specify a new condition to test, if the first condition is false
// Use switch to specify many alternative blocks of code to be executed
#include <iostream>
using namespace std;

int main()
{

    int time = 12;

    if (time <= 12)
    {
        cout << "Good Morning!";
    }
    else if (time < 18)
    {
        cout << "Good Afternoon!";
    }
    else
    {
        cout << "Good Evening!";
    }

    return 0;
}

// Short Hand If...Else (Ternary Operator)
// There is also a short-hand if...else, known as the ternary operator because it uses three operands.
// The ternary operator returns a value based on a condition: if the condition is true, it returns the first value; otherwise, it returns the second value.
// It can be used to replace multiple lines of code with a single line, and is often used to replace simple if...else statements
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int minAge = 18;
    int myAge = 20;

    string result = myAge >= minAge ? "Allowed to vote!" : "Not allowed to vote!";

    cout << result;

    return 0;
}

// C++ Switch Statements
// Use the switch statement to select one of many code blocks to be executed.
#include <iostream>
using namespace std;

int main()
{
    double a, b;
    int choice;

    cout << "=== Simple Calculator ===\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Exit\n";
    cout << "Choose an option: ";
    cin >> choice;

    // Only ask for numbers if user doesn't choose Exit
    if (choice >= 1 && choice <= 4)
    {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    switch (choice)
    {
    case 1:
        cout << "Result: " << a + b << endl;
        break;

    case 2:
        cout << "Result: " << a - b << endl;
        break;

    case 3:
        cout << "Result: " << a * b << endl;
        break;

    case 4:
        if (b != 0)
            cout << "Result: " << a / b << endl;
        else
            cout << "Error: Division by zero is not allowed." << endl;
        break;

    case 5:
        cout << "Exiting program..." << endl;
        break;

    default:
        cout << "Invalid option. Please try again." << endl;
    }

    return 0;
}

// Write a program that asks the user to enter a number and output if it is an odd number or an even number.

#include <iostream>

using namespace std;

int main()
{
    // Declare variable for storing user input.
    int input;

    // Get user input.
    cout << "Please enter a number to determine if it's odd or even: ";
    cin >> input;

    // Determine and print if the input was an odd or even number.
    if (input%2 == 0)
    {
        cout << input << " is even.";
    }
    else
    {
        cout << input << " is odd.";
    }

    return 0;
}
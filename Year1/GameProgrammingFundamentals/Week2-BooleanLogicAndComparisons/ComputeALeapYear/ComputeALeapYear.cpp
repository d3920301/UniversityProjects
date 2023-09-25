// Write a program that asks the user to enter a year and then for the program to output if this year was (or is going to be) a leap year.

#include <iostream>

using namespace std;

int main()
{
    // Declare variable to user input.
    int input;

    // Get user input
    cout << "Please enter a year to see if it's a leap year or not: ";
    cin >> input;

    // Calculate if the inputted year was a leap year.
    if ((input%4 == 0 && input%100 != 0) || input%400 == 0) // (If the remainder of input/4 is equal to 0, and the remainder of input/100 is NOT equal to 0), (or the remainder of input/400 is equal to 0)
    {
        cout << input << " is a leap year.";
    }
    else
    {
        cout << input << " is not a leap year.";
    }

    return 0;
}
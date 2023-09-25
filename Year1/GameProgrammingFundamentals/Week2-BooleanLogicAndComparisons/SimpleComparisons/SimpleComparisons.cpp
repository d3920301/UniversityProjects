// Write a program that takes two values from the user and outputs which value is the largest or if they are equal.

#include <iostream>

int main()
{
    // Declare variables we will use here.
    int value1;
    int value2;

    // Print message telling the user what to do.
    std::cout << "Please enter 2 values to be compared.\n";

    // Get user input.
    std::cout << "Value 1: ";
    std::cin >> value1;
    std::cout << "Value 2: ";
    std::cin >> value2;

    // Determine which value is bigger, or if they are equal, and print the answer.
    if (value1 > value2)
    {
        std::cout << "Value 1 (" << value1 << ") is greater than value 2 (" << value2 <<")";
    }
    else if (value1 < value2)
    {
        std::cout << "Value 2 (" << value2 << ") is greater than value 1 (" << value1 <<")";
    }
    else
    {
        std::cout << "The values (" << value1 << ") are equal.";
    }
    
    return 0;
}
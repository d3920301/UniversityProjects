// Design and write a program to output a student’s letter grade based on the average of 6 module results (percentages) and state if they have passed or not.

#include <iostream>

using namespace std;

int main()
{
    // Declare variables for storing user input
    int module1;
    int module2;
    int module3;
    int module4;
    int module5;
    int module6;
    int average;
    
    // Get user input
    cout << "Please enter the results for module 1: ";
    cin >> module1;
    cout << "Please enter the results for module 2: ";
    cin >> module2;
    cout << "Please enter the results for module 3: ";
    cin >> module3;
    cout << "Please enter the results for module 4: ";
    cin >> module4;
    cout << "Please enter the results for module 5: ";
    cin >> module5;
    cout << "Please enter the results for module 6: ";
    cin >> module6;

    // Work out the average
    average = (module1 + module2 + module3 + module4 + module5 + module6)/6;

    // Determine if there are any failed modules
    if (module1 < 40 || module2 < 40 || module3 < 40 || module4 < 40 || module5 < 40 || module6 < 40)
    {
        cout << "Failed one or more modules.";
    }
    // Determine if the student failed. @note Is this necessary?
    else if (average < 40)
    {
        cout << "The average is less than the pass mark.";
    }
    // If the student passed, determine how well they did and print out a grade.
    else
    {
        if (average >= 40 && average<= 49)
        {
            cout << "Passed with a D.";
        }
        else if (average >= 50 && average<= 59)
        {
            cout << "Passed with a C.";
        }
        else if (average >= 60 && average<= 69)
        {
            cout << "Passed with a B.";
        }
        else if (average >= 70 && average<= 84)
        {
            cout << "Passed with a A.";
        }
        else if (average >= 85 && average<= 100)
        {
            cout << "Passed with a A*.";
        }
    }

    // cout << endl << "DEBUB" << average;

    return 0;
}
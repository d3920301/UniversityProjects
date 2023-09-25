// Convert a number in seconds to output as hours, minutes and seconds.

#include <iostream>

using namespace std;

int main()
{
    // Declare variables we will need. 
    int input;
    int seconds;
    int minutes;
    int hours;
    int days;

    // Get user input
    cout << "Please enter the number (in seconds) you wish to be converted to hours, minutes, and seconds: ";
    cin >> input;

    if (input < 60)
    {
        seconds = input;
        cout << input << " second(s) is equal to " << seconds << " second(s)";
    }
    else if (input < 3600)
    {
        minutes = input/60;
        seconds = input%60;
        cout << input << " second(s) is equal to " << minutes << " minute(s) " << seconds << " second(s)";
    }
    else if (input < 86400)
    {
        hours = input/3600;
        minutes = (input/60) - (hours*60);
        seconds = input%60;
        cout << input << " second(s) is equal to " << hours << " hour(s) " << minutes << " minute(s) " << seconds << " second(s)";
    }
    else if (input >= 86400)
    {
        days = input/86400;
        hours = (input/3600) - (days*24);
        minutes = (input/60) - (days*1440) - (hours*60);
        seconds = input%60;
        cout << input << " second(s) is equal to " << days << " day(s) " << hours << " hour(s) " << minutes << " minute(s) " << seconds << " second(s)";
    }
    

    return 0;
}

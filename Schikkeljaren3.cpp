#include <iostream>
using namespace std;
int main ()
{
    const int currentYear = 2018;
    const int currentMonth = 9;
    const int currentDay = 24;
    int yearOfBirth;
    cout << "Welcome." <<endl <<
    "Please enter your year of birth.";
    cin >> yearOfBirth;
    int monthOfBirth;
    cout << "Now please enter your month of birth.";
    cin >> monthOfBirth;
    int dayOfBirth;
    cout << "Please enter your birth day.";
    cin >> dayOfBirth;
    int currentAge;
    currentAge = ((currentYear - yearOfBirth) * 12) + currentMonth - monthOfBirth;
    int currentAgeYears;
    currentAgeYears = currentAge / 12;
    int currentAgeMonth;
    currentAgeMonth = currentAge % 12;
    cout << "your current age is " << currentAge << " months." << endl <<
    "This is " << currentAgeYears << " years and " << currentAgeMonth<< " months.\n";
    if ((monthOfBirth == 9) && (dayOfBirth == 24))
    {
        cout << "Happy Birthday user!\n";
    }
    else if (dayOfBirth == 24)
    {
        cout << "Happy Monthday user!\n";
    }
    if (yearOfBirth > 2008)
    {
        cout << "Sorry, you are too young.";
    }
    else if ((yearOfBirth == 2008) && (monthOfBirth > 8) && (dayOfBirth > 24))
    {
        cout << "Sorry, you are too young.\n";
    }
    else if (yearOfBirth < 1917)
    {
        cout << "Sorry, you are too old.\n";
    }
    else if ((yearOfBirth == 1917) && (monthOfBirth < 10) && (dayOfBirth < 24))
    {
	cout << "Sorry, you are too old.\n";
    }
    else
    {
        cout << "welcome to Opdracht 1.\n";
    }
    int movedWeekdays;
    int yearsSince1901;
    yearsSince1901 = (yearOfBirth - 1901);
    if ((monthOfBirth > 1) && (dayOfBirth > 28))
    {
    movedWeekdays = (yearsSince1901 * 365 + ((yearsSince1901)/ 4)) % 7;
    }
    else if ((monthOfBirth < 2) && (dayOfBirth < 29))
    {
    movedWeekdays = (yearsSince1901 * 365 + (((yearsSince1901-1)/ 4))- 1) % 7;
    }
    movedWeekdays = (yearsSince1901 * 365 + ((yearsSince1901-1) / 4)) % 7;
    cout << "The number of weekdays moved since Tuesday 1901 is " << movedWeekdays << ".";
return 0;
}

#include <iostream>
using namespace std;

int main ()
{
    //Deze drie variabelen worden gedeclareerd en gelijk geinitaliseerd
    const int currentYear = 2018;
    const int currentMonth = 9;
    const int currentDay = 24;

    //Deze variabelen worden alleen gedeclareerd
    int yearOfBirth;
    int monthOfBirth;
    int dayOfBirth;

    int movedWeekdays;
    int yearsSince1901;

    //Laat een welkom bericht zien
    std::cout << "Welcome." << std::endl;

    //Vraag het geboortejaar op
    std::cout << "Please enter your year of birth." << std::endl;
    std::cin >> yearOfBirth;

    //Vraag de geboortemaand op
    std::cout << "Now please enter your month of birth." << std::endl;
    std::cin >> monthOfBirth;

    //Vraag de geboortedag op
    std::cout << "Please enter your birth day." << std::endl;
    std::cin >> dayOfBirth;

    //Bereken de huidige leeftijd, jaar en maand
    int totalMonthsAlive = ((currentYear - yearOfBirth) * 12) + currentMonth - monthOfBirth;
    int yearsAlive = totalMonthsAlive / 12;
    int monthsAlive = totalMonthsAlive % 12;

    std::cout << "Current age years: " << yearsAlive << std::endl;
    std::cout << "Current age months: " << monthsAlive << std::endl;


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

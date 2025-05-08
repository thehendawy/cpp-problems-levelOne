#include <iostream>
using namespace std;
enum enMonths {
    January = 1 ,
    February = 2 ,
    March = 3 ,
    April = 4 ,
    May = 5 ,
    June = 6 ,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12 
};

int ReadNumber() {
    int Num;
    do
    {
        cout << "Please Enter Number Of Month (Must Positive) ? \n";
        cin >> Num;

    } while (Num <= 0);
    
    return Num;
}

void Months(int Num) {

    switch (Num)
    {
    case enMonths::January:
    cout << "\n It's January \n";
        break;

    case enMonths::February:
    cout << "\n It's February \n";
        break;

    case enMonths::March:
    cout << "\n It's March \n";
        break;

    case enMonths::April:
    cout << "\n It's April \n";
        break;

    case enMonths::May:
    cout << "\n It's May \n";
        break;

    case enMonths::June:
    cout << "\n It's June \n";
        break;

    case enMonths::July:
    cout << "\n It's July \n";
        break;

    case enMonths::August:
    cout << "\n It's August \n";
        break;

    case enMonths::September:
    cout << "\n It's September \n";
        break;

    case enMonths::October:
    cout << "\n It's October \n";
        break;

    case enMonths::November:
    cout << "\n It's November \n";
        break;

    case enMonths::December:
    cout << "\n It's December \n";
        break;
    
    default:
    cout << "\n Wrong Month \n";
        break;
    }
}

int main() {
    Months(ReadNumber());
    return 0;
}
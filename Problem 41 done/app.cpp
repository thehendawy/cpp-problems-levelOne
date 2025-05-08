#include <iostream>
using namespace std;
int ReadNumbers(string message) {
    int NumbersOfHours = 0 ;
    cout << message << endl;
    cin >> NumbersOfHours;
    return NumbersOfHours;
}

float HoursToDays(int Hours) {
    return (float) Hours / 24 ;
}

float HoursToWeeks(int Hours) {
    return (float) Hours / 24 / 7 ;
}

int main() {
    int Hours = ReadNumbers("Please Enter Poistive Number? \n");

    cout << endl << "Total Hours = " << Hours << endl;
    cout << endl << "Total Days = " << HoursToDays(Hours) << endl;
    cout << endl << "Total Weeks = " << HoursToWeeks(Hours) << endl;

    return 0 ;
}
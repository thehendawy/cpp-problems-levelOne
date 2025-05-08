#include <iostream>
#include <cmath>
using namespace std;
struct stTime
{
    int Totaldays , TotalHours , TotalMinutes , TotalSeconds ;
};

int ReadSeconds() {

    float NumberOfSeconds;
    cout << "Please Enter The Number Of Seconds to convert it to days , hours , minutes , seconds ?\n";
    cin >> NumberOfSeconds;
    return NumberOfSeconds;
}

stTime CalculateTime(int Seconds) {
    stTime Time ;
    float SecondsPerDay = 24 * 60 * 60 ;
    float SecondsPerHour = 60 * 60 ;
    float SecondsPerMinute = 60 ;

    Time.Totaldays = floor(Seconds / SecondsPerDay);
    float Remiander = fmod (Seconds,SecondsPerDay);

    Time.TotalHours = floor(Remiander / SecondsPerHour);
    Remiander = fmod(Remiander, SecondsPerHour);

    Time.TotalMinutes = Remiander / SecondsPerMinute;
    Remiander = fmod(Remiander, SecondsPerMinute);

    Time.TotalSeconds = Remiander;

    return Time;

}

void PrintTime(stTime Time ) {

    cout << Time.Totaldays << ":"
    << Time.TotalHours << ":" 
    << Time.TotalMinutes << ":" 
    <<  Time.TotalSeconds << endl;

}

int main() {
    stTime CalculateAllTime = CalculateTime(ReadSeconds());
    PrintTime(CalculateAllTime);
    return 0;
}
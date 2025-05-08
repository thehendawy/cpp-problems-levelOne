#include <iostream>
using namespace std;
struct stTimeofwork
{
    float days , hours , minutes , seconds;
};

stTimeofwork ReadFromUser() {
    stTimeofwork theTime;

    cout << "Please Enter How Many Days You Worked? \n";
    cin >> theTime.days;

    cout << "Please Enter How Many Hours You Worked? \n";
    cin >> theTime.hours;
    cout << "Please Enter How Many Minutes Yor Worked? \n";
    cin >> theTime.minutes;

    cout << "Please Enter How Many Seconds You Worked? \n";
    cin >> theTime.seconds;

    return theTime;
}

float AllSeconds(stTimeofwork theTime) {
    
    theTime.days =  (theTime.days * 24 ) * 60 * 60 ;
    theTime.hours = theTime.hours * 60 * 60 ;
    theTime.minutes = theTime.minutes * 60 ;

    float AllSeconds = theTime.days + theTime.hours + theTime.minutes + theTime.seconds ;
    return AllSeconds;
    
}

int main() {
    float AllSecondsInwork = AllSeconds(ReadFromUser());
    cout << "\n All Seconds You Worked Is " << AllSecondsInwork << " Seconds" << endl;

    cout << "***************************************\n";

    return 0;

}
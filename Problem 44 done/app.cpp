#include <iostream>
using namespace std;
enum enDays {
    Sunday = 1 ,
    Monday = 2 ,
    Tuesday = 3 ,
    Wednesday = 4 ,
    Thursday = 5 ,
    Friday = 6 ,
    Saturday = 7 
};

int ReadNumber() {
    int Num;
    do
    {
        cout << "Please Enter Number Of Day ? \n";
        cin >> Num;

    } while (Num <= 0);
    
    return Num;
}

void Days(int Num) {

    switch (Num)
    {
    case enDays::Sunday:
    cout << "\n It's Sunday \n";
        break;

    case enDays::Monday:
    cout << "\n It's Monday \n";
        break;

    case enDays::Tuesday:
    cout << "\n It's Tuesday \n";
        break;

    case enDays::Wednesday:
    cout << "\n It's Wednesday \n";
        break;

    case enDays::Thursday:
    cout << "\n It's Thursday \n";
        break;

    case enDays::Friday:
    cout << "\n It's Friday \n";
        break;
    case enDays::Saturday:
    cout << "\n It's Saturday \n";
        break;
    
    default:
    cout << "\n Wrong Day \n";
        break;
    }
}

int main() {
    Days(ReadNumber());
    return 0;
}
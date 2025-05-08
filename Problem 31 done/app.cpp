#include <iostream>
#include <cmath>
using namespace std;
int ReadNumber() {
    int Num;
    cout << "Please Enter any Number? \n";
    cin >> Num;
    return Num;
}
void PowerOf2_3_4(int Num) {
    cout << "The ^2 is "  << endl;
    cout << "  " << pow(Num , 2) << "\n";

    cout << "The ^3 is "  << endl;
    cout << "  " << pow(Num , 3) << "\n";

    cout << "The ^4 is "  << endl;
    cout << "  " << pow(Num , 4) << "\n";
}

int main() {
    PowerOf2_3_4(ReadNumber());
    return 0;
}
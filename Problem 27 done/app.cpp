#include <iostream>
using namespace std;
int ReadNumber() {
    int Num;
    cout << "Please Enter Number? \n";
    cin >> Num;
    cout << "************************************ \n";
    return Num;
}
void PrintRangeFromNto1(int Num) {
    int c = 0 ;
    while (Num > c)
    {
        cout << Num << endl;
        Num--;
    }
}
int main() {
    PrintRangeFromNto1(ReadNumber());
    return 0;
}
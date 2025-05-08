#include <iostream>
using namespace std;
void ReadNumbers(int &Num1 , int &Num2) {
    cout << "Please Enter Number 1 ?\n";
    cin >> Num1;
    cout << "Please Enter Number 2 ?\n";
    cin >> Num2;
}

void SwapNumbers(int &Num1, int &Num2) {
    int temp;
    temp = Num1 ;
    Num1 = Num2 ;
    Num2 = temp ;
}

void PrintNumbers(int Num1, int Num2) {
    cout << "\n Number 1 = " << Num1 << endl;
    cout << "\n Number 2 = " << Num2 << endl;
}
int main() {
    int Num1 , Num2 ;
    ReadNumbers(Num1 , Num2);
    PrintNumbers(Num1 , Num2);
    SwapNumbers( Num1, Num2);
    PrintNumbers(Num1 , Num2);

    return 0;
}
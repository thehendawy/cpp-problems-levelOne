// #include <iostream>
// using namespace std;
// int main(){
//     int Num1 , Num2 , Num3 ;
//     cout << "please Enter first number ?\n";
//     cin >> Num1;

//     cout << "please Enter second number ?\n";
//     cin >> Num2;

//     cout << "please Enter third number ?\n";
//     cin >> Num3;
//     int Sum = Num1 + Num2 + Num3;
//     cout << "**************************************\n";
//     cout << "The Sum of entered Numbers : " << Sum << endl;
//     return 0;

// }

#include <iostream>
using namespace std;
void ReadNumbers(int &Num1, int &Num2 , int &Num3){
    cout <<"Please Enter Number 1? \n";
    cin >> Num1;

    cout <<"Please Enter Number 2? \n";
    cin >> Num2;

    cout <<"Please Enter Number 3? \n";
    cin >> Num3;
}

int SumNumbers(int Num1, int Num2 , int Num3) {
    return  Num1 + Num2 + Num3;
}

void PrintNumber(float Total) {
    cout << "\n The Total sum of Numbers is " << Total << endl;
}

int main() {
    int Num1 , Num2, Num3;
    ReadNumbers(Num1,Num2,Num3);
    PrintNumber(SumNumbers(Num1,Num2,Num3));
    return 0;
}
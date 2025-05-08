// #include <iostream>
// using namespace std;
// int main() {
//     int Num1 , Num2;
//     cout << "Enter First Number?\n";
//     cin >> Num1;

//     cout << "Enter Second Number?\n";
//     cin >> Num2;

//     if(Num1 > Num2) {
//         cout << "Max Number is :" << Num1 << endl;
//     } else {
//         cout << "Max Number is :" << Num2 << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
enum enNum{Num1 = 1 , Num2 = 0};
void ReadNumbers(int &Num1, int &Num2) {
    cout << "Please Enter Number 1 ?\n";
    cin >> Num1;

    cout << "Please Enter Number 2 ?\n";
    cin >> Num2;
}
enNum MaxNumber(int Num1,int Num2) {
    if (Num1 > Num2)  return enNum::Num1;
    else              return enNum::Num2;   
}
void PrintMaxNumber(int Num1, int Num2) {
    cout << "\n ************************************ \n";
    cout << "You Entered " << Num1 << " And " << Num2 << endl;
    if (MaxNumber(Num1 , Num2) == enNum::Num1)
    {
        cout << "\n The Max Number Is " << Num1<< endl;
    } else {
        cout << "\n The Max Number Is " << Num2 << endl;
    }
    
}

int main() {
    int Num1, Num2;
    ReadNumbers(Num1,Num2);
    PrintMaxNumber(Num1 , Num2);
    return 0;
}
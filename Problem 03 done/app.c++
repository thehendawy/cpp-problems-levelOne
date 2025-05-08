// This my soluation
// #include <iostream>
// using namespace std;
// int main() {
//     int Num;
//     cout << "Please Enter Any Number ?\n";
//     cin >> Num;
//     if(Num % 2 == 0 ){
//         cout << "Its even number\n";
//     }else {
//         cout << "Its odd number\n";
//     }
//     return 0;
// }

//This E-Abo Hodoud soluation
#include <iostream>
using namespace std;
enum enNumberType {Even = 2 , Odd = 1};

int ReadNumber() {
    int Num;
    cout << "Please Enter any Number? \n";
    cin >> Num;
    return Num;
}

enNumberType CheckNumber(int Num) {
    int Result = Num % 2 ;
    if (Result == 0)
    {
        return enNumberType::Even;
    } 
    else {
        return enNumberType::Odd;
    }
}

void PrintNumber(enNumberType NumberType) {
    if (NumberType == enNumberType::Even)
    {
        cout << "\n Your Number is even\n";
    }  
    else {
        cout << "\n Your Number is odd\n";

    }
}

int main() {
    PrintNumber(CheckNumber(ReadNumber()));
}


// My Soluation
// #include <iostream>
// using namespace std;
// int main() {
//     int Number;
//     cout << "please enter a number?\n";
//     cin >> Number;
//     int halfnum = Number / 2;
//     cout << "*************************************\n";
//     cout << "The half of the number you entered : " << halfnum << endl;
//     return 0;
// }

// Abo Hadhoud Soluation

#include <iostream>
using namespace std;
int ReadNumber() {
    int Num;
    cout << "Please Enter Any Number?\n";
    cin >> Num;
    return Num;
}
float HalfNumber(int Num) {
    return (float) Num / 2 ;
}
void PrintHalfNumber(int Num) {
    string HalfNum = "\n Half of " + to_string(Num) + " is " + to_string(HalfNumber(Num)) + "\n";
    cout << HalfNum;
} 

int main() {
    PrintHalfNumber(ReadNumber());
    return 0;
}
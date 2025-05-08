#include <iostream>
using namespace std;
int ReadNumber() {
    int Num;
    cout << "Please enter number ?\n";
    cin >> Num;

    return Num;
}
void PrintRangeFrom1toN(int Num) {
    cout << "\nRange Printed : \n";
    for (int i = 1; i <= Num; i++)
    {
        cout << i << endl;
    }
    
}
int main() {
    PrintRangeFrom1toN(ReadNumber());
    return 0;
}
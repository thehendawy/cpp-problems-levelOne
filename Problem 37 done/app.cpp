#include <iostream>
using namespace std;

int ReadNumber(string message) {
    int Num = 0;
    cout << message << endl;
    cin >> Num;
    return Num;
}

int AddNumbersUntill99() {
    int Sum = 0 , Num = 0 , C = 1 ;

    while (Num != -99)
    {
        Sum += Num;
        Num = ReadNumber("Please enter Number " + to_string(C) + " ?");
        C++;
    } 
    return Sum;
}

int main() {
    int Num = AddNumbersUntill99();
    cout << endl << "Result = " << Num << endl;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int ReadNumber() {
    int Num;
    cout << "Please Enter Number? \n";
    cin >> Num;

    return Num;
}
int ReadPower() {
    int Pow;
    cout << "Please Enter Power? \n";
    cin >> Pow;

    return Pow;
}

int PowerOfNumber(int Num, int Pow) {

    if (Pow == 0)
    {
        return 1;
    }

    return pow(Num , Pow);
    
}

int main() {
    // here i put new Variables (Num and Pow) to equals the Functions because if we put the functions in argument direct 
    // the code will print ("\n The Result : " ) before read the functions
    //Now will read the functions first and print this ("\n The Result : ") with the Result of function
    int Num = ReadNumber();
    int Pow = ReadPower();
    cout << "\n The Result : " << PowerOfNumber(Num,Pow) << "\n"; 
    return 0;
}
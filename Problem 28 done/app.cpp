#include <iostream> 
using namespace std;

int ReadNumber() {
    int Num;
    cout << "Please Enter Number? \n";
    cin >> Num;
    return Num;
} 

int CheckNumber(int Num) {
    int Sum = 0;
    cout << "\n The Number of odd Numbers from " << Num << " Is" << endl;
    for (int i = 1; i < Num; i++)
    {
        if ( i % 2 != 0 )
        {
            Sum += i;
        }
    }
    return Sum;
}



int main() {
    cout << CheckNumber(ReadNumber()) << endl;
    return 0;
}


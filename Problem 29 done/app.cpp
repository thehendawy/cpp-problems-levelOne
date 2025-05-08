#include <iostream> 
using namespace std;

int ReadNumber() {
    int Num;
    cout << "Please Enter Number ? \n";
    cin >> Num;
    return Num;
}

int SumEvenNumbers(int Num) {
    int sum = 0 ;
    int i = 1;
    while (i <= Num)
    {
        if (i % 2 == 0)
        {
            sum += i ;
        }   
        i++;
    }
    return sum;
}

void PrintNumbers(int Num) {
    cout << "\n The sum of even Numbers from " << Num << " Is : " << SumEvenNumbers(Num) << endl;
}

int main() {
    PrintNumbers(ReadNumber());
    return 0;
}
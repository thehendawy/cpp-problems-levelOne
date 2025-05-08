#include <iostream>
using namespace std;
enum enPrimeOrNot { Prime = 1 , NotPrime = 2};

int ReadPositveNumber() {
    int Num = 0;
    do
    {
        cout << "Please enter positve number?" << endl;
        cin >> Num;

    } while (Num <= 0);

    return Num;
}

enPrimeOrNot CheckNumber(int Num) {

    if (Num % 2 == 0)
    {
        return enPrimeOrNot::NotPrime;
    }

    return enPrimeOrNot::Prime;

}

void PrintStatus(int Num) {
    switch (CheckNumber(Num)) {

    case enPrimeOrNot::Prime:
        cout << "The Number is prime\n";
        break;
    case enPrimeOrNot::NotPrime:
        cout << "The Number is Not prime\n";
        break;
    }
}

int main() {
    PrintStatus(ReadPositveNumber());
    return 0;
}
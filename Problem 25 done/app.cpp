#include <iostream>
using namespace std;

int Readage() {
    int Age;
    cout << "Please Enter Your Age? \n";
    cin >> Age;
    return Age;
}

bool ValidateNumberInRange(int Number, int From, int To) {
    return (Number>= From && Number<= To);
}

int ReadAgeBetween(int From, int To) {
    int Age;
    do
    {
        Age = Readage();

    } while (!ValidateNumberInRange(Age,18,45));
    return Age;
}

void PrintStatus(int age) {
    if (ValidateNumberInRange(age,18,45))
    {
        cout << "\n your Age " << age << " Is Valid \n";
    }
    else{
        cout << "\n your Age " << age << " Is Not Valid \n";
    }
    
}

int main() {
    PrintStatus(ReadAgeBetween(18,45));
    return 0;
}
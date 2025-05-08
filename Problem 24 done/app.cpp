
#include <iostream>
using namespace std;
int ReadAge(){
    int age;
    cout << "Please Enter Your Age ? \n";
    cin >> age;
    return age;
}
bool ValidateNumberInRange(int Num, int From, int To) {
    return (Num>= From && Num<= To);
}

void PrintStatus(int age) {
    if (ValidateNumberInRange(age,18,45)) {
        cout << "\n Valid Age \n";
    }
    else {
        cout << "\n InValid Age \n";
    }
}

int main() {
    PrintStatus(ReadAge());
    return 0;
}

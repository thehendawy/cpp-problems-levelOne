#include <iostream>
#include <cmath>
using namespace std;

struct stPiggyBank {
    int Penny , Nickel , Dime , Quarter , Dollar;
};

stPiggyBank ReadPiggyBank() {

    stPiggyBank type;
     
    cout << "Please enter your penny ? \n";
    cin >> type.Penny;

    cout << "Please enter Your Nickels ?\n";
    cin >> type.Nickel ;

    cout << "Please enter your Dimes ? \n";
    cin >> type.Dime;

    cout << "Please enter Your Quarters ?\n";
    cin >> type.Quarter;

    cout << "Please enter Your Dollars ?\n";
    cin >> type.Dollar;

    return type;
}

int YourPennies(stPiggyBank type) {
    //In Market Penny = 1 , Nickel = 5 , Dime = 10 , Quarter = 25 , Dollar = 100

    int TotalPennies = type.Penny * 1 + type.Nickel * 5 + type.Dime * 10 + type.Quarter * 25 + type.Dollar * 100;
    return TotalPennies;
}



int main() {
    int TotalPennies = YourPennies(ReadPiggyBank());
    cout << "  Total Pennies = " << TotalPennies  << endl;
    return 0;
    
}
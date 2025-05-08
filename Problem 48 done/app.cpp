#include <iostream>
using namespace std;

int main() {
    int LoanAmount;
    int MonthsYouNeed;

    cout << "How Much the Loan Amount? \n";
    cin >> LoanAmount;

    cout << "How many months you need to settle a loan? \n";
    cin >> MonthsYouNeed;

    int MonthlyAmount = LoanAmount / MonthsYouNeed;

    cout << "You should pay " << MonthlyAmount << " every month to finish the loan amount\n";
    return 0;


}
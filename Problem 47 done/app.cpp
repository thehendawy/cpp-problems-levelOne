#include <iostream>
using namespace std;
int ReadNumber(string message){
    int Num;
    cout << message << endl;
    cin >> Num;
    return Num;
}

int CalculateMonthlyPay(int LoanAmount , int MonthlyPayment  ) {

    return  LoanAmount / MonthlyPayment ;

}

int main() {
    int LoanAmount = ReadNumber("Please Enter Your Loan Amount?");
    int MonthlyPayment = ReadNumber("Please Enter Your Monthly Payment?");
    int FinishTheLoan = CalculateMonthlyPay(LoanAmount , MonthlyPayment);

    cout << "You need to " << FinishTheLoan << " Months to Finish the Loan Amount\n";

    return 0;

}
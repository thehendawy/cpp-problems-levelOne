#include <iostream> 
using namespace std;

float ReadNumber(string message) {
    int Num = 0;
    cout << message << endl;
    cin >> Num;
    return Num;
}

float CalculatePaidBack(float TotalBill , float CashPaid) {
    float PaidBack = TotalBill - CashPaid;
    return PaidBack;
}

void PrintPaidBack(float PaidBack) {
    cout << "The Paid Back is " << PaidBack << endl;
}

int main() {
    float TotalBill = ReadNumber("Please Enter the Total Bill? ");
    float CashPaid = ReadNumber("Please Enter the Cash Paid? ");
    PrintPaidBack(CalculatePaidBack(CashPaid ,TotalBill));
    return 0 ;
}
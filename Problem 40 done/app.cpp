#include <iostream>
using namespace std;
float ReadNumber(string message) {
    int Num = 0;
    cout << message << endl;
    cin >> Num;
    return Num;
}

float CalculateFeeAndTax(float BillValue) {
    float Fee = 1.1;
    float Tax = 1.16;

     BillValue = BillValue * Fee ;
     BillValue = BillValue * Tax ;

    return BillValue;
}

void PrintTotalBill(float BillValue) {
    cout << "The Total Value is " << CalculateFeeAndTax(BillValue) << endl;
}


int main() {
    float BillValue = ReadNumber("Please Enter Bill Value?");
    PrintTotalBill(BillValue);
    return 0;
}
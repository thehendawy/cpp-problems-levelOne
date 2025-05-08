#include <iostream>
using namespace std;

string ReadPINCode() {
    string PinCode;
    cout << "Please Enter Your ATM Pin Code? \n";
    cin >> PinCode;
    return PinCode;
}

bool Login() {
    string ReadPIN;
    do
    {
        ReadPIN = ReadPINCode();
        
        if (ReadPIN == "1234")
        {
            return 1 ;
        }
        else {
            cout << "Wrong PIN\n";
            system("Color 4f");
            cout << "***************************\n";
        }
        
    } while (ReadPIN != "1234");
    return 0;
}

int main() {
    if (Login())
    {
        cout << "\n Your Balance = " << 7200 << endl;
        system("Color 2f");
    }
    return 0;
    
}
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
    int C = 3 ;
    do
    {
        C--;
        ReadPIN = ReadPINCode();
        
        if (ReadPIN == "1234")
        {
            return 1 ;
        }
        else {
            system("Color 4f");
            cout << "Wrong PIN, You have " << C << " more tries\n";
            cout << "***************************\n";
        }
        
    } while (ReadPIN != "1234" && C >= 1);
    return 0;
}

int main() {
    if (Login())
    {
        cout << "\n Your Balance = " << 7200 << endl;
        system("Color 2f");
    }
    else {
        cout << "\n Your Card Blocked \n";
    }
    return 0;
    
}
#include <iostream>
using namespace std;
string ReadName() {
    string Name;
    cout << "Please Enter Your Name ?\n";
    getline(cin,Name);
    return Name;
}

void PrintName(string Name) {
    cout << "\n Your Name Is : " << Name << endl;
}

int main() {
    PrintName(ReadName());
}
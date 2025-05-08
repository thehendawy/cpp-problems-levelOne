#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b;
    cout << "Please enter the first number?\n";
    cin >> a;

    cout << "Please enter the second number?\n";
    cin >> b;
    cout << "*************************************\n";

    int area = a*(sqrt(pow(b,2)-pow(a,2)));
    cout << "The rectangle area through diagonal is " << area << endl;
    return 0;
}
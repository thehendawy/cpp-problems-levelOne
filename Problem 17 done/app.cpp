#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, h;
    cout << "Please enter the first number to calculate triangle area?\n";
    cin >> a;

    cout << "Please enter the second number to calculate triangle area?\n";
    cin >> h;

    int area = (a/2)* h;
    cout << "The triangle area is " << area << endl;
    return 0;
}
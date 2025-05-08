#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a , b;
    cout << "Please enter the Length of rectangle ?\n";
    cin >> a;

    cout << "Please enter the width of rectangle ?\n";
    cin >> b;

    int areaOfRectangle = a * b;

    cout << "****************************\n";
    cout << "The area of rectangle is " << areaOfRectangle << endl;
    return 0;

}
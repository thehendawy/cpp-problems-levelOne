#include <iostream>
using namespace std;
int main() {
    int r;
    cout << "Please enter The number to calculate circle area ?\n";
    cin >> r;

    int PI = 3.14;
    int area = PI * (r*r);
    cout << "*******************************\n";
    cout << "The Circle area is "<< area << endl;
    return 0;
}
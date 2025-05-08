#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int L;
    cout << "Please enter the value of(L) to calculate Citcle area along the circumference?\n";
    cin >> L;

    const float Pi = 3.14;
    float Area = (pow(L,2)) / (4*Pi);

    cout << "Citcle area along the circumference is " << Area << endl;
    return 0;
}
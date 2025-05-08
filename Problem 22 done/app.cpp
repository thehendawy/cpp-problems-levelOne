#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b ;
    const float PI = 3.14;

    cout << "Please enter the value of (a) to calculate Circle area inscriped in an Isosceles triangle?\n";
    cin >> a;

    cout << "Please enter the value of (b) to calculate Circle area inscriped in an Isosceles triangle?\n";
    cin >> b;
    cout << "****************************************************\n";

    float Area = PI * (pow(b,2) / 4) * ((2*a));
    cout << "Circle area inscriped in an Isosceles triangle is " << Area << endl;
    return 0;


}
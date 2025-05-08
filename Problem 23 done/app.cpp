#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "This operation to calculate Circle Area , circle descriped around an arbitrary triangle\n";
    cout << "*******************************************************************************************\n";
    const float PI = 3.14;
    int a , b , c ;
    cout << "Please enter the value of (a) ? \n";
    cin >> a;

    cout << "Please enter the value of (b) ? \n";
    cin >> b;

    cout << "Please enter the value of (c) ? \n";
    cin >> c;

    float P = (a+b+c) / 2 ;

    float L = (a * b * c) / (4*sqrt(P*(P-a)*(P-b)*(P-c)));
    L = L*L;

    float Area = PI * L;

    cout << "The circle area is " << Area << endl;
    return 0;
}
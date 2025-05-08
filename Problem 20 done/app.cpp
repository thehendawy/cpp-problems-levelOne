#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int A;
    cout << "Please enter The value of (A) to calculate Circle area inscriped in a squre?\n";
    cin >> A;

    float PI = 3.14;
    float Area = (PI*pow(A,2)) / 4;
    
    cout << "********************************************\n";
    cout << "Circle area inscriped in a squre is " << Area << endl;
    return 0;
}
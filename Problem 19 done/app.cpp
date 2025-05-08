#include <iostream>
#include <cmath>
using namespace std;

void takeD() {
    cout << "This application to calculate Circle area through Diameter \n";
    cout << "******************************\n";
}
int area() {
    int D;
    cout << "Please enter The value of Diameter \n";
    cin >> D;
    int PI = 3.14;
    int Foperator = PI * (pow(D , D));
    int area = Foperator / 4;
}
int main() {
    takeD();
    cout << "The Circle area to diameter is " << area() << endl;
    return 0;
}




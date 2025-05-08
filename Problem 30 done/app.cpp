#include <iostream> 
using namespace std;
int ReadNumberPostive(string Message) {
    int Number;
    do 
    {
        cout << Message << endl;
        cin >> Number;

    } while(Number < 0);

    return Number;
}
int Factorial(int Number) {
    int F = 1;
    for (int i = Number; i >= 1; i--)
    {
        F = F * i;
    }
    return F;
}
int main() {
    cout << Factorial(ReadNumberPostive("Enter Number Postive ?")) << endl;;
}
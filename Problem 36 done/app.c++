#include <iostream>
using namespace std;

enum enOperationType {Sum = '+' , Subtract = '-' , Divide = '/' , Multiply = '*'} ;

float ReadNumber(string message) {
    float Num = 0;
    cout << message << endl;
    cin >> Num;
    return Num;
}
enOperationType ReadOpType() {
    char Optype;
    cout << "Please Enter any operation type you want (+ , - , * , /)?\n";
    cin >> Optype;
    return (enOperationType)Optype;
    // In cpp we can't use enum directly with cin . so the soluation is use any variable then
   // convert it to enum when you doing return
}


float Calculate(float num1 , float num2 , enOperationType type) {

    switch (type)
    {
    case enOperationType::Sum:
        return num1 + num2;
    case enOperationType::Subtract:
        return num1 - num2;
    case enOperationType::Multiply:
        return num1 * num2;
    case enOperationType::Divide:
        return num1 / num2;
    
    default:
        cout << "Invalid input, defualting to ADD (+)\n";
        return  num1 + num2;
    }
}



int main() {
    float Num1 = ReadNumber("Please Enter First Number?");
    float Num2 = ReadNumber("Please Enter Second Number?");

    enOperationType Type = ReadOpType();

    cout << endl << "Result = " << Calculate(Num1 , Num2 , Type) << endl;
    return 0;


}

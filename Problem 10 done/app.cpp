// #include <iostream>
// using namespace std;
// void YourMark() {
//     float mark1 ,mark2 ,mark3;
//     cout << "Please Enter Mark 1 ?\n";
//     cin >> mark1;
//     cout << "Please Enter Mark 2 ?\n";
//     cin >> mark2;
//     cout << "Please Enter Mark 3 ?\n";
//     cin >> mark3;

//     float Average;
//     Average = (mark1 + mark2 + mark3) /3;
//     cout << "Your Average is : " << Average << endl;
// }

// int main() {
//     YourMark();
//     return 0;
// }

#include <iostream>
using namespace std;
void ReadNumbers(float &num1, float &num2, float &num3) {
    cout << "Please Enter Number 1? \n";
    cin >> num1;
    
    cout << "Please Enter Number 2? \n";
    cin >> num2;

    cout << "Please Enter Number 3? \n";
    cin >> num3;
}
float SumNumbers(float num1, float num2, float num3) {
    return num1 + num2 + num3 ;
}
float AvgNumbers(float num1, float num2, float num3) {
    return SumNumbers(num1,num2,num3) / 3;
}
void PrintAvg(float Average) {
    cout << "\n The average of Numbers is " << Average << endl;
}
int main() {
    float num1, num2, num3;
    ReadNumbers(num1 , num2, num3);
    PrintAvg(AvgNumbers(num1,num2,num3));
    return 0;
}

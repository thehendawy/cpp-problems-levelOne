// #include <iostream>
// using namespace std;
// int main() {
//     float mark1, mark2, mark3;
//     cout << "Please enter your first mark?\n";
//     cin >> mark1;

//     cout << "Please enter your second mark?\n";
//     cin >> mark2;

//     cout << "Please enter your third mark?\n";
//     cin >> mark3;

//     float Average = (mark1 +mark2 +mark3) / 3;
//     cout << "**********************************\n";
//     cout << "Your Average is : " << Average << endl;
//     if(Average > 50) {
//         cout << "Pass Congratulations\n";
//     } else {
//         cout << "Fail\n";
//     }
//     return 0;

// }

#include <iostream>
using namespace std;
enum enPassFail {Pass = 1 , Fail = 0};

void ReadNumbers(int &Num1, int &Num2, int &Num3) {
    cout << "Please Enter Number 1?\n";
    cin >> Num1;

    cout << "Please Enter Number 2?\n";
    cin >> Num2;

    cout << "Please Enter Number 3?\n";
    cin >> Num3;
}

int Sum3Marks(int Num1, int Num2, int Num3){
    return Num1 + Num2 + Num3;
}

float AverageMarks(int Num1, int Num2, int Num3) {
    return (float) Sum3Marks(Num1,Num2,Num3) / 3;
}

enPassFail Check(float Average) {
    if (Average > 50)
    {
       return enPassFail::Pass;
    } else {
        return enPassFail::Fail;
    }
}

void PrintStatus(float Average) {
    cout << "\n Your Average is " << Average << endl; 
    if (Check(Average) == enPassFail::Pass)
    {
        cout << "\n You Passed \n";
    } else {
        cout << "\n You Failed \n";
    }
}

int main() {
    int Num1,Num2,Num3;
    ReadNumbers(Num1,Num2,Num3);
    PrintStatus(AverageMarks(Num1,Num2,Num3));
    return 0;
}
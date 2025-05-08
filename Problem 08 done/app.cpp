// #include <iostream>
// using namespace std;
// int main() {
//     int Mark;
//     cout << "Please Enter Your Mark ?\n";
//     cin >> Mark;
//     if(Mark>=50) {
//         cout << "Pass Congratulations\n";
//     } else {
//         cout << "Fail\n";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

enum enPassFail {Pass = 1, Fail = 2};

float ReadMark() {
    float Mark;
    cout << "Please Enter Your Mark?\n";
    cin >> Mark;
    return Mark;
}

enPassFail CheckMark(float Mark) {
    if (Mark >=50)
    {
        return enPassFail::Pass;
    } else {
        return enPassFail::Fail;
    }
}
void PrintStatus(float Mark) {
    if (CheckMark(Mark) == enPassFail::Pass)
    {
        cout << "\n Passed \n";
    } else {
        cout << "\n Failed \n";
    }
}

int main() {
    PrintStatus(ReadMark());
    return 0;
}
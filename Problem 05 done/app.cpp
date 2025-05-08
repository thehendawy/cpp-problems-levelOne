// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     string driverlecense;
//     string recommedtion;

//     cout << "Do you have recommndtion ?\n";
//     cin >> recommedtion;
//     if(recommedtion == "Yes") {
//         cout << "Hired\n";

//     }
//         else if(recommedtion== "No"){
//         cout << "Please enter your age?\n";
//         cin >> age;
//         cout << "Go you have griver lecsense?\n";
//         cin >> driverlecense;
//     }
//     if(age > 21 && driverlecense == "yes") {
//         cout << "Hired\n";
//     }else {
//         cout << "Rejected\n";
//     }
//     return 0;
// }

// This E-Abo Hadhoud soluation
#include <iostream>
using namespace std;
struct stInfo
{
    int Age;
    bool HasDrivedLicense;
    bool HasRecommendation;
};

stInfo ReadInfo() {
    stInfo info;
    cout << "Please Enter Your Age?\n";
    cin >> info.Age;

    cout << "Do You have a Drived License?\n";
    cin >> info.HasDrivedLicense;
    
    cout << "Do You have a Recommendation ?\n";
    cin >> info.HasRecommendation;
    return info;
}

bool IsAccepted(stInfo info) {
    if (info.HasRecommendation)
    {
        return true;
    }
    else
    {
        return (info.Age > 21 && info.HasDrivedLicense);
    }
}

void PrintInfo(stInfo info) {
    if (IsAccepted(info))
    {
        cout << "\n Hired\n";
    } else {
        cout << "\n Rejected\n";
    }
}

int main() {
    PrintInfo(ReadInfo());
}
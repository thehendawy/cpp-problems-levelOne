// This My soluation
// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     string driveLecense;
//     cout << "Please Enter Your Age ?\n";
//     cin >> age;
//     cout << "Do you have a drive sense?\n";
//     cin >> driveLecense;
//     if (age > 21 && driveLecense == "yes") {
//         cout << "Hired\n";
//     } else {
//         cout << "Regected\n";
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
};

stInfo ReadInfo() {
    stInfo info;
    cout << "Please Enter Your Age?\n";
    cin >> info.Age;

    cout << "Do You have a Drived License?\n";
    cin >> info.HasDrivedLicense;

    return info;
}

bool IsAccepted(stInfo info) {
    return (info.Age > 21 && info.HasDrivedLicense);
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

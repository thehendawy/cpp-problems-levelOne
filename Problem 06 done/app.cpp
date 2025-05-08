// This easy soluation
// #include <iostream>
// using namespace std;
// int main() {
//     string fName;
//     string lName;
//     cout << "Please Enter First Name?\n";
//     cin >> fName;
//     cout << "Please Enter Last Name?\n";
//     cin >> lName;
//     string FullName = fName + " " + lName;
//     cout << "***********************************\n";
//     cout << "Your Name is : " << FullName << endl;
//     return 0;
// }

// this Abo Hadhoud soluation
#include <iostream>
using namespace std;
struct stPerson
{
    string fName;
    string lName;
};
stPerson Readinfo() {
    stPerson info;
    
    cout << "Please Enter Your First Name?\n";
    cin >>info.fName;
    
    cout << "Please Enter Your Last Name?\n";
    cin >>info.lName;

    return info;
}
string GetFullName(stPerson info){
    string FullName;
    FullName = info.fName + " " + info.lName;
    return FullName;
}
void FullName(string FullName){
    cout << "\n Your Name Is " << FullName << endl;
}
int main() {
    FullName(GetFullName(Readinfo()));
    return 0;
}


#include <iostream> 
using namespace std;
int ReadGrade(int from , int to) {

    int Grade;
    do
    {
        cout << "Please Enter Your Grade between 0 to 100 ?\n";
        cin >> Grade;

    } while (Grade < from || Grade > to);
    
    return Grade;
}

string PrintStatus(int Grade) {
    
    if (Grade >= 90){
        return "A";
    } else if (Grade >=80) {
        return "B";
    } else if (Grade >=70) {
        return "C";
    } else if (Grade >=60) {
        return "D";
    }else if (Grade >=50) {
        return "E";
    } else {
        return "F \n";
    }
}
int main() {
    int G = ReadGrade(0,100);
    cout << "  Your status is " << PrintStatus(G) << endl;
    return 0;
}
#include <iostream>
using namespace std;

void PrintLettersFromAtoZ() {
    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }
    
}

int main() {
    PrintLettersFromAtoZ();
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string name;
    
    do {
        cout << "Enter the Name: ";
        cin >> name;
        if (name != "SIT") {
            cout << name << endl;
        }
    } while (name != "SIT");
}
/*
OUTPUT 
Enter the Name: sit
sit
Enter the Name: jit
jit
Enter the Name: SIT
*/
#include <iostream>
using namespace std;

int main() {
    string name[2], branch[2];
    int roll[2];

    for(int i = 0; i < 2; i++) {
        cout << "Enter name: ";
        cin >> name[i];

        cout << "Enter roll: ";
        cin >> roll[i];

        cout << "Enter branch: ";
        cin >> branch[i];
    }

    cout << "\nStudent Details:\n";

    for(int i = 0; i < 2; i++) {
        cout << "Name: " << name[i] << endl;
        cout << "Roll: " << roll[i] << endl;
        cout << "Branch: " << branch[i] << endl;
    }

    return 0;
}
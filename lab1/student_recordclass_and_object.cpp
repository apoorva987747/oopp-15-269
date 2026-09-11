#include <iostream>
using namespace std;

class Student {
public:
    string name, branch;
    int roll;

    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll: ";
        cin >> roll;

        cout << "Enter branch: ";
        cin >> branch;
    }

    void show() {
        cout << "\nName: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    Student s1, s2;

    s1.input();
    s2.input();

    s1.show();
    s2.show();

    return 0;
}
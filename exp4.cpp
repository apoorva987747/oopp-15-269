#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Collection
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Using auto and range-based for loop
    cout << "Elements of the collection: ";

    for (auto element : numbers) {
        cout << element << " ";
    }

    return 0;
}
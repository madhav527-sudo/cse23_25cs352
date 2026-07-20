#include <iostream>
using namespace std;

int main() {
    int a[10];

    cout << "Enter 10 elements:\n";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    cout << "\nElements and their addresses:\n";
    for (int i = 0; i < 10; i++) {
        cout << "a[" << i << "] = " << a[i]
             << "  Address = " << &a[i] << endl;
    }

    return 0;
}
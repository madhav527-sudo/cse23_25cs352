#include <iostream>
using namespace std;

int main() {
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
        cout << "Answer = " << a + b;
    else if (choice == 2)
        cout << "Answer = " << a - b;
    else if (choice == 3)
        cout << "Answer = " << a * b;
    else if (choice == 4)
        cout << "Answer = " << a / b;
    else
        cout << "Invalid Choice";

    return 0;
}
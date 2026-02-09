#include <iostream>
using namespace std;

int main() {
    // Logical Operators in C++
    // They combine multiple conditions and return true (1) or false (0)

    int a = 10;
    int b = 20;
    int c = 10;

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << endl;

    // 1. Logical AND (&&)
    // Returns true only if BOTH conditions are true
    cout << "--- Logical AND (&&) ---" << endl;
    cout << "(a < b) && (a == c): " << ((a < b) && (a == c)) << endl;  // 1 (true && true = true)
    cout << "(a < b) && (a > c): " << ((a < b) && (a > c)) << endl;    // 0 (true && false = false)
    cout << "(a > b) && (a == c): " << ((a > b) && (a == c)) << endl;  // 0 (false && true = false)

    // 2. Logical OR (||)
    // Returns true if AT LEAST ONE condition is true
    cout << "\n--- Logical OR (||) ---" << endl;
    cout << "(a < b) || (a == c): " << ((a < b) || (a == c)) << endl;  // 1 (true || true = true)
    cout << "(a < b) || (a > c): " << ((a < b) || (a > c)) << endl;    // 1 (true || false = true)
    cout << "(a > b) || (a != c): " << ((a > b) || (a != c)) << endl;  // 0 (false || false = false)

    // 3. Logical NOT (!)
    // Reverses the result: true becomes false, false becomes true
    cout << "\n--- Logical NOT (!) ---" << endl;
    cout << "!(a < b): " << !(a < b) << endl;   // 0 (not true = false)
    cout << "!(a > b): " << !(a > b) << endl;   // 1 (not false = true)
    cout << "!(a == c): " << !(a == c) << endl; // 0 (not true = false)

    // Practical Example
    cout << "\n--- Practical Example ---" << endl;
    int age = 25;
    bool hasLicense = true;

    // Check if person can drive
    if ((age >= 18) && hasLicense) {
        cout << "You can drive!" << endl;
    }

    // Check if person is a minor or senior
    if ((age < 18) || (age > 60)) {
        cout << "Special discount available!" << endl;
    } else {
        cout << "No special discount." << endl;
    }

    return 0;
}

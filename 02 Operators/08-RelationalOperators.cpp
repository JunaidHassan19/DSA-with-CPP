#include <iostream>
using namespace std;

int main() {
    // Relational Operators in C++
    // They compare two values and return true (1) or false (0)

    int a = 10;
    int b = 20;

    cout << "a = " << a << ", b = " << b << endl;
    cout << endl;

    // 1. Equal to (==)
    cout << "a == b: " << (a == b) << endl;  // 0 (false)

    // 2. Not equal to (!=)
    cout << "a != b: " << (a != b) << endl;  // 1 (true)

    // 3. Greater than (>)
    cout << "a > b: " << (a > b) << endl;    // 0 (false)

    // 4. Less than (<)
    cout << "a < b: " << (a < b) << endl;    // 1 (true)

    // 5. Greater than or equal to (>=)
    cout << "a >= b: " << (a >= b) << endl;  // 0 (false)

    // 6. Less than or equal to (<=)
    cout << "a <= b: " << (a <= b) << endl;  // 1 (true)

    // Another example with equal values
    cout << "\n--- When values are equal ---" << endl;
    int x = 15;
    int y = 15;

    cout << "x = " << x << ", y = " << y << endl;
    cout << "x == y: " << (x == y) << endl;  // 1 (true)
    cout << "x >= y: " << (x >= y) << endl;  // 1 (true)
    cout << "x <= y: " << (x <= y) << endl;  // 1 (true)

    return 0;
}

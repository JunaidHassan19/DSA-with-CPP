#include <iostream>
using namespace std;

int main() {
    // Assignment Operators in C++

    // 1. Simple Assignment (=)
    int a = 10;
    cout << "Simple Assignment: a = " << a << endl;

    // 2. Addition Assignment (+=)
    int b = 10;
    b += 5;  // equivalent to: b = b + 5
    cout << "Addition Assignment (b += 5): " << b << endl;

    // 3. Subtraction Assignment (-=)
    int c = 10;
    c -= 3;  // equivalent to: c = c - 3
    cout << "Subtraction Assignment (c -= 3): " << c << endl;

    // 4. Multiplication Assignment (*=)
    int d = 10;
    d *= 4;  // equivalent to: d = d * 4
    cout << "Multiplication Assignment (d *= 4): " << d << endl;

    // 5. Division Assignment (/=)
    int e = 20;
    e /= 4;  // equivalent to: e = e / 4
    cout << "Division Assignment (e /= 4): " << e << endl;

    // 6. Modulus Assignment (%=)
    int f = 17;
    f %= 5;  // equivalent to: f = f % 5
    cout << "Modulus Assignment (f %= 5): " << f << endl;

    return 0;
}

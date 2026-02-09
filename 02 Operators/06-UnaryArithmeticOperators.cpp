#include <iostream>
using namespace std;

int main() {
    // Unary Arithmetic Operators: ++, --, +, -

    int a = 5;
    
    // Unary Plus (+) - returns the value as is
    cout << "Original value of a: " << a << endl;
    cout << "Unary plus (+a): " << +a << endl;
    
    // Unary Minus (-) - returns the negated value
    cout << "Unary minus (-a): " << -a << endl;
    
    // Increment Operator (++)
    cout << "\n--- Increment Operator ---" << endl;
    
    // Pre-increment: first increment, then use
    int b = 10;
    cout << "b = " << b << endl;
    cout << "Pre-increment (++b): " << ++b << endl;  // b becomes 11, prints 11
    cout << "After pre-increment, b = " << b << endl;
    
    // Post-increment: first use, then increment
    int c = 10;
    cout << "\nc = " << c << endl;
    cout << "Post-increment (c++): " << c++ << endl;  // prints 10, then c becomes 11
    cout << "After post-increment, c = " << c << endl;
    
    // Decrement Operator (--)
    cout << "\n--- Decrement Operator ---" << endl;
    
    // Pre-decrement: first decrement, then use
    int d = 10;
    cout << "d = " << d << endl;
    cout << "Pre-decrement (--d): " << --d << endl;  // d becomes 9, prints 9
    cout << "After pre-decrement, d = " << d << endl;
    
    // Post-decrement: first use, then decrement
    int e = 10;
    cout << "\ne = " << e << endl;
    cout << "Post-decrement (e--): " << e-- << endl;  // prints 10, then e becomes 9
    cout << "After post-decrement, e = " << e << endl;

    return 0;
}

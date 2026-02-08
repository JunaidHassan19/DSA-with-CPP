/*
  Data Types in C++
  ------------------
  A data type defines the type and size of data a variable can hold.
  It tells the compiler how much memory to allocate and what operations
  are allowed on that data.

  ╔══════════════════════════════════════════════════════════════════════╗
  ║               PRIMITIVE vs NON-PRIMITIVE DATA TYPES                  ║
  ╠══════════════════════════════════════════════════════════════════════╣
  ║                                                                      ║
  ║  PRIMITIVE (Fundamental/Basic) Data Types:                           ║
  ║  ─────────────────────────────────────────                           ║
  ║  • Provided by the language itself (built-in)                        ║
  ║  • Store single, simple values directly in memory                    ║
  ║  • Have a fixed size                                                 ║
  ║  • Examples: int, float, double, char, bool, void                    ║
  ║                                                                      ║
  ║  NON-PRIMITIVE (Derived/Reference) Data Types:                       ║
  ║  ─────────────────────────────────────────────                       ║
  ║  • Created using primitive data types                                ║
  ║  • Can store multiple values or complex data                         ║
  ║  • Size can vary or be dynamic                                       ║
  ║  • Examples: Arrays, Strings, Pointers, Classes, Structures          ║
  ║                                                                      ║
  ╚══════════════════════════════════════════════════════════════════════╝

  ┌─────────────────────────────────────────────────────────────────────┐
  │                    DETAILED CLASSIFICATION                          │
  └─────────────────────────────────────────────────────────────────────┘

  1. PRIMITIVE (Built-in) Data Types
     ┌──────────┬────────┬──────────────────────────────┐
     │ Type     │ Size   │ Range / Description           │
     ├──────────┼────────┼──────────────────────────────┤
     │ int      │ 4 bytes│ -2,147,483,648 to 2,147,483,647 │
     │ float    │ 4 bytes│ ~7 decimal digits precision   │
     │ double   │ 8 bytes│ ~15 decimal digits precision  │
     │ char     │ 1 byte │ -128 to 127 (ASCII character) │
     │ bool     │ 1 byte │ true (1) or false (0)         │
     │ void     │ 0 bytes│ represents no value           │
     └──────────┴────────┴──────────────────────────────┘

  2. NON-PRIMITIVE Data Types

     a) DERIVED Data Types (built from primitives)
        - Arrays     : Collection of same-type elements  (int arr[5])
        - Pointers   : Stores memory address             (int *ptr)
        - References : Alias for another variable        (int &ref = x)
        - Functions  : Block of reusable code

     b) USER-DEFINED Data Types
        - struct  : Groups different data types together
        - union   : Multiple members sharing same memory
        - enum    : Named integer constants
        - class   : Blueprint for objects (OOP)

  Type Modifiers (used with int & char):
     short     -> 2 bytes
     long      -> 4 or 8 bytes
     long long -> 8 bytes
     signed    -> allows negative values (default)
     unsigned  -> only positive values (doubles the +ve range)

  ┌─────────────────────────────────────────────────────────────────────┐
  │  KEY DIFFERENCES:                                                   │
  │  ───────────────                                                    │
  │  • Primitive   → Fixed size, stores value directly                  │
  │  • Non-Primitive → Can have variable size, may store references     │
  │                                                                     │
  │  • Primitive   → Cannot be broken down further                      │
  │  • Non-Primitive → Made up of primitives or other non-primitives    │
  └─────────────────────────────────────────────────────────────────────┘
*/

#include <iostream>
using namespace std;

int main()
{
  // ============ 1. INTEGER TYPES ============
  int age = 25;                // 4 bytes
  short s = 32000;             // 2 bytes
  long l = 100000L;            // 4 bytes (minimum)
  long long ll = 9999999999LL; // 8 bytes

  cout << "--- Integer Types ---" << endl;
  cout << "int age       = " << age << "  | size = " << sizeof(age) << " bytes" << endl;
  cout << "short s       = " << s << "  | size = " << sizeof(s) << " bytes" << endl;
  cout << "long l        = " << l << "  | size = " << sizeof(l) << " bytes" << endl;
  cout << "long long ll  = " << ll << "  | size = " << sizeof(ll) << " bytes" << endl;
  cout << endl;

  // ============ 2. FLOATING-POINT TYPES ============
  float pi = 3.14159f;           // 4 bytes  (~7 digits precision)
  double gravity = 9.80665;      // 8 bytes  (~15 digits precision)
  long double ld = 2.718281828L; // 8-16 bytes (platform dependent)

  cout << "--- Floating-Point Types ---" << endl;
  cout << "float pi        = " << pi << "  | size = " << sizeof(pi) << " bytes" << endl;
  cout << "double gravity  = " << gravity << "  | size = " << sizeof(gravity) << " bytes" << endl;
  cout << "long double ld  = " << ld << "  | size = " << sizeof(ld) << " bytes" << endl;
  cout << endl;

  // ============ 3. CHARACTER TYPE ============
  char ch = 'A';          // 1 byte (stores ASCII value)
  unsigned char uc = 255; // 1 byte (0 to 255)

  cout << "--- Character Type ---" << endl;
  cout << "char ch          = " << ch << "  | ASCII = " << (int)ch << "  | size = " << sizeof(ch) << " byte" << endl;
  cout << "unsigned char uc = " << (int)uc << "  | size = " << sizeof(uc) << " byte" << endl;
  cout << endl;

  // ============ 4. BOOLEAN TYPE ============
  bool isActive = true; // 1 byte (true = 1, false = 0)
  bool isGameOver = false;

  cout << "--- Boolean Type ---" << endl;
  cout << "bool isActive   = " << isActive << "  | size = " << sizeof(isActive) << " byte" << endl;
  cout << "bool isGameOver = " << isGameOver << "  | size = " << sizeof(isGameOver) << " byte" << endl;
  cout << endl;

  // ============ 5. STRING TYPE ============
  string name = "Sigma Batch"; // from <string> (included via iostream)

  cout << "--- String Type ---" << endl;
  cout << "string name = " << name << "  | length = " << name.length() << endl;
  cout << endl;

  // ============ 6. SIGNED vs UNSIGNED ============
  signed int si = -100;          // allows negative
  unsigned int ui = 4000000000U; // only positive, larger +ve range

  cout << "--- Signed vs Unsigned ---" << endl;
  cout << "signed int si   = " << si << "  | size = " << sizeof(si) << " bytes" << endl;
  cout << "unsigned int ui = " << ui << "  | size = " << sizeof(ui) << " bytes" << endl;
  cout << endl;

  // ============ 7. TYPE CASTING (Bonus) ============
  int x = 65;
  char c = (char)x; // int -> char (65 = 'A' in ASCII)
  double d = 9.99;
  int truncated = (int)d; // double -> int (decimal part removed)

  cout << "--- Type Casting ---" << endl;
  cout << "int 65 as char    = " << c << endl;
  cout << "double 9.99 as int = " << truncated << endl;
  cout << endl;

  // ============ 8. NON-PRIMITIVE DATA TYPES ============
  cout << "--- Non-Primitive Data Types ---" << endl;

  // a) Array - Collection of same type elements
  int numbers[5] = {10, 20, 30, 40, 50};
  cout << "Array: ";
  for (int i = 0; i < 5; i++)
  {
    cout << numbers[i] << " ";
  }
  cout << endl;

  // b) Pointer - Stores memory address
  int value = 100;
  int *ptr = &value;
  cout << "Pointer: value = " << value << ", address = " << ptr << ", *ptr = " << *ptr << endl;

  // c) Reference - Alias for another variable
  int original = 50;
  int &ref = original;
  ref = 75; // Changes original too
  cout << "Reference: original = " << original << ", ref = " << ref << endl;

  // d) String (Non-primitive) - Already shown above
  // Strings are actually objects (non-primitive)

  // e) Structure - User-defined type (example)
  struct Student
  {
    string studentName;
    int rollNo;
    float marks;
  };

  Student stu1;
  stu1.studentName = "Rahul";
  stu1.rollNo = 101;
  stu1.marks = 95.5f;

  cout << "Struct Student: " << stu1.studentName << ", Roll: " << stu1.rollNo << ", Marks: " << stu1.marks << endl;

  // f) Enum - Named constants
  enum Color
  {
    RED,
    GREEN,
    BLUE
  };
  Color myColor = GREEN;
  cout << "Enum Color: GREEN = " << myColor << endl;

  return 0;
}

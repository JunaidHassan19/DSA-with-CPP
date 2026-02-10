#include <iostream>
using namespace std;

int main()
{
  // ==========================================
  // TERNARY OPERATOR (? :)
  // ==========================================
  // Syntax: condition ? value_if_true : value_if_false
  // It is a shorthand for simple if-else statements

  // ==========================================
  // Example 1: Basic Ternary Operator
  // ==========================================

  int age = 20;

  // Using if-else (traditional way)
  if (age >= 18)
  {
    cout << "Adult" << endl;
  }
  else
  {
    cout << "Minor" << endl;
  }

  // Same logic using Ternary Operator (one line!)
  string result = (age >= 18) ? "Adult" : "Minor";
  cout << result << endl;

  // Or directly in cout
  cout << ((age >= 18) ? "Adult" : "Minor") << endl;

  // ==========================================
  // Example 2: Find Maximum of Two Numbers
  // ==========================================

  int a = 10, b = 25;

  int max = (a > b) ? a : b;
  cout << "Maximum: " << max << endl;

  // ==========================================
  // Example 3: Find Minimum of Two Numbers
  // ==========================================

  int min = (a < b) ? a : b;
  cout << "Minimum: " << min << endl;

  // ==========================================
  // Example 4: Even or Odd Check
  // ==========================================

  int num = 7;
  string evenOdd = (num % 2 == 0) ? "Even" : "Odd";
  cout << num << " is " << evenOdd << endl;

  // ==========================================
  // Example 5: Positive, Negative or Zero
  // ==========================================

  int n = -5;

  // Nested Ternary Operator
  string sign = (n > 0) ? "Positive" : (n < 0) ? "Negative"
                                               : "Zero";
  cout << n << " is " << sign << endl;

  // ==========================================
  // Example 6: Absolute Value
  // ==========================================

  int value = -15;
  int absolute = (value < 0) ? -value : value;
  cout << "Absolute value of " << value << " is " << absolute << endl;

  // ==========================================
  // Example 7: Pass or Fail
  // ==========================================

  int marks;
  cout << "\nEnter your marks: ";
  cin >> marks;

  cout << "Result: " << ((marks >= 40) ? "PASS" : "FAIL") << endl;

  // ==========================================
  // Example 8: Assign Grade using Nested Ternary
  // ==========================================

  char grade = (marks >= 90)   ? 'A'
               : (marks >= 80) ? 'B'
               : (marks >= 70) ? 'C'
               : (marks >= 60) ? 'D'
                               : 'F';

  cout << "Your Grade: " << grade << endl;

  // ==========================================
  // Example 9: Check Eligibility to Vote
  // ==========================================

  int voterAge;
  cout << "\nEnter your age: ";
  cin >> voterAge;

  cout << ((voterAge >= 18) ? "You can vote!" : "You cannot vote yet.") << endl;

  // ==========================================
  // Key Points:
  // ==========================================
  // 1. Ternary operator is a shortcut for simple if-else
  // 2. Syntax: condition ? true_value : false_value
  // 3. Can be nested for multiple conditions (but avoid too much nesting)
  // 4. Makes code shorter and cleaner for simple decisions
  // 5. Returns a value, so can be used in assignments

  return 0;
}

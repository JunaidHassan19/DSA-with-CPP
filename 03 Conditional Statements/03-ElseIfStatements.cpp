#include <iostream>
using namespace std;

int main()
{
  // ==========================================
  // ELSE-IF LADDER (Multiple Conditions)
  // ==========================================
  // Syntax:
  // if (condition1) { }
  // else if (condition2) { }
  // else if (condition3) { }
  // else { }

  // ==========================================
  // Example 1: Grade Calculator
  // ==========================================

  int marks;
  cout << "Enter your marks (0-100): ";
  cin >> marks;

  if (marks >= 90)
  {
    cout << "Grade: A+ (Excellent!)" << endl;
  }
  else if (marks >= 80)
  {
    cout << "Grade: A (Very Good!)" << endl;
  }
  else if (marks >= 70)
  {
    cout << "Grade: B (Good)" << endl;
  }
  else if (marks >= 60)
  {
    cout << "Grade: C (Average)" << endl;
  }
  else if (marks >= 50)
  {
    cout << "Grade: D (Below Average)" << endl;
  }
  else if (marks >= 40)
  {
    cout << "Grade: E (Pass)" << endl;
  }
  else
  {
    cout << "Grade: F (Fail)" << endl;
  }

  // ==========================================
  // Example 2: Day of the Week
  // ==========================================

  int day;
  cout << "\nEnter day number (1-7): ";
  cin >> day;

  if (day == 1)
  {
    cout << "Monday" << endl;
  }
  else if (day == 2)
  {
    cout << "Tuesday" << endl;
  }
  else if (day == 3)
  {
    cout << "Wednesday" << endl;
  }
  else if (day == 4)
  {
    cout << "Thursday" << endl;
  }
  else if (day == 5)
  {
    cout << "Friday" << endl;
  }
  else if (day == 6)
  {
    cout << "Saturday" << endl;
  }
  else if (day == 7)
  {
    cout << "Sunday" << endl;
  }
  else
  {
    cout << "Invalid day! Enter 1-7 only." << endl;
  }

  // ==========================================
  // Example 3: Age Category
  // ==========================================

  int age;
  cout << "\nEnter your age: ";
  cin >> age;

  if (age < 0)
  {
    cout << "Invalid age!" << endl;
  }
  else if (age <= 2)
  {
    cout << "You are a Baby" << endl;
  }
  else if (age <= 12)
  {
    cout << "You are a Child" << endl;
  }
  else if (age <= 19)
  {
    cout << "You are a Teenager" << endl;
  }
  else if (age <= 35)
  {
    cout << "You are a Young Adult" << endl;
  }
  else if (age <= 60)
  {
    cout << "You are an Adult" << endl;
  }
  else
  {
    cout << "You are a Senior Citizen" << endl;
  }

  // ==========================================
  // Example 4: Simple Calculator
  // ==========================================

  char operation;
  int num1, num2;

  cout << "\nEnter first number: ";
  cin >> num1;
  cout << "Enter operator (+, -, *, /): ";
  cin >> operation;
  cout << "Enter second number: ";
  cin >> num2;

  if (operation == '+')
  {
    cout << "Result: " << num1 + num2 << endl;
  }
  else if (operation == '-')
  {
    cout << "Result: " << num1 - num2 << endl;
  }
  else if (operation == '*')
  {
    cout << "Result: " << num1 * num2 << endl;
  }
  else if (operation == '/')
  {
    if (num2 != 0)
    {
      cout << "Result: " << num1 / num2 << endl;
    }
    else
    {
      cout << "Error: Division by zero!" << endl;
    }
  }
  else
  {
    cout << "Invalid operator!" << endl;
  }

  return 0;
}

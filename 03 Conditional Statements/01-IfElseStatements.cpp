#include <iostream>
using namespace std;

int main()
{
  // ==========================================
  // 1. Simple IF Statement
  // ==========================================
  // Syntax: if (condition) { code }
  // Executes code only if condition is TRUE

  int marks = 85;

  if (marks >= 40)
  {
    cout << "You Passed!" << endl;
  }

  // ==========================================
  // 2. IF-ELSE Statement
  // ==========================================
  // Syntax: if (condition) { code1 } else { code2 }
  // If TRUE -> code1 executes, If FALSE -> code2 executes

  int age;
  cout << "Enter your age: ";
  cin >> age;

  if (age >= 18)
  {
    cout << "You are an Adult" << endl;
  }
  else
  {
    cout << "You are a Minor" << endl;
  }

  // ==========================================
  // 3. IF-ELSE IF-ELSE Ladder
  // ==========================================
  // Used when we have multiple conditions to check

  int score = 75;

  if (score >= 90)
  {
    cout << "Grade: A" << endl;
  }
  else if (score >= 80)
  {
    cout << "Grade: B" << endl;
  }
  else if (score >= 70)
  {
    cout << "Grade: C" << endl;
  }
  else if (score >= 60)
  {
    cout << "Grade: D" << endl;
  }
  else
  {
    cout << "Grade: F (Fail)" << endl;
  }

  // ==========================================
  // 4. Nested IF-ELSE
  // ==========================================
  // if-else inside another if-else

  int num = 10;

  if (num > 0)
  {
    cout << num << " is Positive" << endl;

    if (num % 2 == 0)
    {
      cout << num << " is Even" << endl;
    }
    else
    {
      cout << num << " is Odd" << endl;
    }
  }
  else
  {
    cout << num << " is Negative or Zero" << endl;
  }

  // ==========================================
  // 5. Checking Multiple Conditions (AND, OR)
  // ==========================================

  int x = 25;

  // AND (&&) - Both conditions must be true
  if (x >= 18 && x <= 60)
  {
    cout << x << " is in working age group" << endl;
  }

  // OR (||) - At least one condition must be true
  if (x < 18 || x > 60)
  {
    cout << x << " is NOT in working age group" << endl;
  }

  return 0;
}
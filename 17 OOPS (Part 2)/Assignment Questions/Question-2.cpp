#include <iostream>
#include <string>
using namespace std;

/*
Question 2: Create a class BankAccount with private attributes accountNumber and balance. Implement public methods deposit(), withdraw(), and getBalance() to manage the account.
*/

class BankAccount
{
private:
  int accountNumber;
  double balance;

public:
  BankAccount(int accNum, double bal)
  {
    accountNumber = accNum;
    balance = bal;
  }

  void deposit(double amount)
  {
    balance += amount;
  }

  void withdraw(double amount)
  {
    if (amount <= balance)
    {
      balance -= amount;
    }
    else
    {
      cout << "Insufficient balance for this withdrawal.\n";
    }
  }

  double getBalance()
  {
    return balance;
  }
};

int main()
{
  BankAccount myAccount(123456, 500.0);
  myAccount.deposit(150.0);
  myAccount.withdraw(100.0);
  cout << "Current Balance: Rs." << myAccount.getBalance() << endl;
  return 0;
}
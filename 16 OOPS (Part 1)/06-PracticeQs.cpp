#include <iostream>
#include <vector>
using namespace std;

/*
Create a User class with properties: id(private), username(public), &password(private).
Its id should be initialized in a parametersiz constrctor.
It should have a Getter & Setter for password.
*/

class User
{
  int id;
  string password;

public:
  string userName;

  User(int id)
  {
    this->id = id;
  }

  // Setter
  void setPassword(string password)
  {
    this->password = password;
  }

  // getter
  string getPassword()
  {
    return password;
  }
};

int main()
{
  User user1{101};
  user1.userName = "Junni";
  user1.setPassword("abc123");

  cout << "username : " << user1.userName << endl;
  cout << "Password : " << user1.getPassword() << endl;

  return 0;
}
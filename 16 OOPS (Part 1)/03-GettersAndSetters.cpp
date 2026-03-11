#include <iostream>
#include <string>
using namespace std;

class student
{
  string name;
  float cgpa;

public:
  void getPercentage()
  {
    cout << (cgpa * 10) << " % " << endl;
  }

  // setters
  void setName(string namValue)
  {
    name = namValue;
  }

  void setCgpa(float cgpaValue)
  {
    cgpa = cgpaValue;
  }

  // getters
  string getName()
  {
    return name;
  }
  float getCgpa()
  {
    return cgpa;
  }
};

int main()
{
  student s1;
  s1.setName("Junni");
  s1.setCgpa(9.0);
  cout << s1.getName() << endl;
  cout << s1.getCgpa() << endl;
  s1.getPercentage();
  return 0;
}

/*
getters and setters
=========================
Getters and setters are special methods in a class that allow you to control access to the properties (member variables) of an object. They provide a way to read (get) and modify (set) the values of private properties while keeping them encapsulated.
*/
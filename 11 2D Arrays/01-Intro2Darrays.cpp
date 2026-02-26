#include <iostream>
using namespace std;

int main()
{
  int students[3][3] = {{98, 97, 96},
                        {88, 85, 89},
                        {94, 86, 87}};

  cout << students[1][1] << endl;
  cout << students[0][1] << endl;
  cout << students[2][2] << endl;

  return 0;
}
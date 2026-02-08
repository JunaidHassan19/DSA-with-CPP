/*
Question 2: Enter cost of 3 items from the user (using float data type) - a pencil, a pen and an eraser. You have to output the total cost of the items back to the user as thire bill.

(Add on : You can also try adding 18% GST tax to the items in the bill as an advanced problem)

*/

#include <iostream>
using namespace std;

int main()
{
  float Pen, Pencil, Eraser;
  cout << "Enter the cost of a Pen: ";
  cin >> Pen;

  cout << "Enter the cost of a Pencil: ";
  cin >> Pencil;

  cout << "Enter the cost of an Eraser: ";
  cin >> Eraser;

  float totalCost = Pen + Pencil + Eraser;

  float gst_amount = (totalCost * 18) / 100.0; // 18% GST

  cout << "Total: " << totalCost << endl;
  cout << "Total Cost + GST: " << totalCost + gst_amount << endl;

  return 0;
}
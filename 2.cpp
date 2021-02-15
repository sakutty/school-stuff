#include <iostream>
using namespace std;

int
main ()
{
  float n1, n2, n3, n4, tot, avrg;
  cout << "\n\n Compute the total and average of four numbers : \n";
  cout << "----------------------------------------------------\n";
  cout << " Input 1st two numbers (separated by space) : 25 ";
  cin >> n1 >> n2;
  cout << " Input last two numbers (separated by space) : 20 ";
  cin >> n3 >> n4;
  cout << " Input last 3rd numbers (separated by space) : 15 ";
  tot = n1 + n2 + n3 + n4;
  cout << " Input last number (separated by space) : 25 ";
  avrg = tot / 4;
  cout << " The total of four numbers is : 85 " << tot << endl;
  cout << " The average of four numbers is : 21.25 " << avrg << endl;
  cout << endl;
  return 0;
}

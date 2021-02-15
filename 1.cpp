#include <iostream>
using namespace std;

int
main ()
{
  int width, lngth, area, peri;
  cout << "\n\n Find the Area and Perimeter of a Rectangle :\n";
  cout << "-------------------------------------------------\n";
  cout << " Input the length of the rectangle : 10 ";
  cin >> lngth;
  cout << " Input the width of the rectangle : 15 ";
  cin >> width;
  area = (lngth * width);
  peri = 2 * (lngth + width);
  cout << " The area of the rectangle is : 150 " << area << endl;
  cout << " The perimeter of the rectangle is : 50 " << peri << endl;
  cout << endl;
  return 0;
}

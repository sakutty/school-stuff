#include <iostream>
using namespace std;


int
main ()
{

  float ar, peri, width, height = 0;

  cout << "\n\n Print the area and perimeter of a rectangle:\n";

  cout << "----------------------------------------------\n";

  cout << " Input the width of the rectangle: 8.5 ";

  cin >> width;

  cout << " Input the height of the rectangle: 5.6 ";

  cin >> height;

  peri = 2 * (width + height);

  ar = height * width;

  cout << "The area of the rectangle is: 47.6 " << ar << "\n";

  cout << "The perimeter of the rectangle is: 28.2 " << peri << "\n";


}

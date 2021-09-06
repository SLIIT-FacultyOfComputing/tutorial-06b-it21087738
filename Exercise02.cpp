#include <iostream>
using namespace std;
#include "Box.h"

int main() 
{
  Box box1;
  
  int length, width, height;

  cout << "Enter the Length of the Box : ";
  cin >> length;
  cout << "Enter the width of the Box : ";
  cin >> width;
  cout << "Enter the Height of the Box : ";
  cin >> height;
   
  box1.setLength(length);
  box1.setWidth(width);
  box1.setHeight(height);
   
  cout << "Box Length : " << box1.getLength() << endl;
  cout << "Box Width : " << box1.getWidth() << endl;
  cout << "Box Height : " << box1.getHeight() << endl;
  cout << "Volume of Box : " << box1.calcVolume() << endl;
  
  return 0;

}

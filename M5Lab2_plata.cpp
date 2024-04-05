/*
CSC 134
M5Lab2
David Plata Cruz
4/4/24
*/

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
double getLength();
double getWidth();
double getArea();
double displayData();

int main()
{
	
   double length, width, area;     
          
   length = getLength();
   width = getWidth();
   area = getArea();
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

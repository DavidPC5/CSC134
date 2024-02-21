
//CSC 134
//M3T1 & M3T2
//David Plata Cruz
//2/14/24
#include <iostream>
using namespace std;
int main()
{ 
 //Declare Variables
 double length, width, area;
 double length2, width2, area2;

 //Ask for width,length,of first rectangle
 cout << "1st Length? ";
 cin >> length;
 cout << "1st Width? ";
 cin >> width;

 //Ask for width, length of second rectangle
 cout << "2nd Length? ";
 cin >> length2;
 cout << "2nd Width? ";
 cin >> width2;

 //Do calculations
 area = length * width;
 area2 = length2 * width2;

 //print output
 cout << "1st Rectangle Area: " << area << endl;
 cout << "2nd Rectangle Area: " << area2 << endl;
 
 if (area > area2){
 cout << "The 1st rectangle has a larger area" << endl << endl;
 }
 else if (area == area2){
 cout << "The rectangles have the same area" << endl << endl;
 }
 else{ 
 cout << "The 2nd rectangle has a larger area" << endl << endl;
 }

return 0;
}

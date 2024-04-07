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
double getArea(double, double);
void displayData(double, double, double);

int main()
{
    // delcare variables
    double length, width, area;     
    
    // variables that equal functions
    length = getLength();
    width = getWidth();
    area = getArea(length, width);

    //display all
    displayData(length, width, area);
          
    return 0;
}

double getLength(){
    double l;
    cout << "Enter the Length: ";
    cin >> l;
    return l;
}

double getWidth(){
    double w;
    cout << "Enter the Width: ";
    cin >> w;
    return w;
}

double getArea(double length, double width){
    return length * width;
}

void displayData(double length, double width, double area){
    cout << "" << endl;
    cout << "Rectangle Data" << endl;
    cout << "---------------" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl << endl;
}
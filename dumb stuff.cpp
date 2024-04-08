#include <iostream>
using namespace std;

int main(){
cout << "Question 2" << endl;
    double length, width, height, volume;

    //ask for user input
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    //calculate volume
    volume = length * width * height;
    
    cout << "Volume of the Block is: " << volume << endl;

    return 0;
}
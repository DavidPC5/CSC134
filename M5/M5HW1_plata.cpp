/*
CSC 134
M5HW1- bronze
David Plata Cruz
4/5/24
*/

#include <iostream>
#include <iomanip>
using namespace std;

//delcare function prototype
double Q1();
double Q2();
double Q3();

int main(){
    
    //delcare variables
    double quest1, quest2, quest3;

    //variables for functions
    quest1 = Q1();
    quest2 = Q2();
    quest3 = Q3();

    return 0;
}
double Q1(){
    cout << "Question 1" << endl;

    //declare variables
    string month1, month2, month3;
    double rain1, rain2, rain3, average;

    //ask user for input
    cout << "Enter month: "; 
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: "; 
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: "; 
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    cout << fixed << setprecision(2);
    average = (rain1+rain2+rain3)/3;

    cout << "The average rainfall for " << month1 << ", " << month2 
    << ", and " << month3 << " is " << average << " inches." << endl << endl;

    return 0;
}
double Q2(){
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
    
    cout << "Volume of the Block is: " << volume << endl << endl;

    return 0;
}
double Q3(){

    cout << "Question 3" << endl;
    int num;
    cout << "Enter a number (1 - 10): ";
    cin >> num;

    switch(num){
        case 1:
            cout << "The Roman numeral version of " << num << " is I" << endl;
            break;
        case 2:
            cout << "The Roman numeral version of " << num << " is II" << endl;
            break;
        case 3:
            cout << "The Roman numeral version of " << num << " is III" << endl;
            break;
        case 4:
            cout << "The Roman numeral version of " << num << " is IV" << endl;
            break;
        case 5:
            cout << "The Roman numeral version of " << num << " is V" << endl;
            break;
        case 6:
            cout << "The Roman numeral version of " << num << " is VI" << endl;
            break;
        case 7:
            cout << "The Roman numeral version of " << num << " is VII" << endl;
            break;
        case 8:
            cout << "The Roman numeral version of " << num << " is VIII" << endl;
            break;
        case 9:
            cout << "The Roman numeral version of " << num << " is IX" << endl;
            break;
        case 10:
            cout << "The Roman numeral version of " << num << " is X" << endl;
            break;
        default:
            cout << "Please enter in only numbers (1-10)" << endl;
            break;
    }

    cout << "" << endl;
    return 0;
}
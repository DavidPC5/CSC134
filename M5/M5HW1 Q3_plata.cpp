/*
CSC 134
M5HW1- Q3
David Plata Cruz
4/5/24
*/

#include <iostream>
using namespace std;

int main(){

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

    return 0;
}
/*
CSC 134
M4HW1 - gold
David Plata Cruz
3/17/2024
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "M4HW1_plata part three" << endl;
    cout << "For Gold" << endl;

    int num, num2 = 1, sum;
    cout << "Enter a number 1 to 12: ";
    cin >> num;

    while (num > 12)
    {
        cout << "Invalid Entry! " << "Enter a number 1 to 12: ";
        cin  >> num;
    }

    while (num2 <= 12)
    {
        sum = num * num2;
        cout << num << " * " << num2 << " = " << sum <<endl;
        num2++;
    }

return 0;
}
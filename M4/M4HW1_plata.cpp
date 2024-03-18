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
    int number, times, sum;
    cout << "Enter a number: ";
    cin >> number;

for (times = 1; times <= 10; times++)
{
    sum = number * times;
    cout << number << " * " << times << " = " << sum << endl;
}




return 0;
}
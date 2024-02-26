/*
CSC 134
M3Lab2
David Plata Cruz
2/26/2024
*/

#include <iostream>
using namespace std;

int main()
{
//Delcare variables
int grade;

//Ask for number grade
cout << "Enter your numberical grade: ";
cin >> grade;

//Find the letter grade and print it I guess
if ( grade >= 90 && grade <= 100)
{
    cout << "Your letter grade is: A";
}
else if (grade >= 80 && grade <= 89)
{
    cout << "Your letter grade is: B";
}
else if (grade >= 70 && grade <= 79)
{
    cout << "Your letter grade is: C";
}
else if (grade >= 60 && grade <= 69)
{
    cout << "Your letter grade is: D";
}
else if (grade >= 0 && grade <= 59)
{
    cout << "Your letter grade is: F, YOU SUCK!!!";
}
else
{
    cout << "How";
}


cout << "" << endl << endl;
return 0;
}
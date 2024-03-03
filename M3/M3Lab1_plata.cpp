/*
CSC 134
M3Lab1 - Choose a Button
David Plata Cruz
3/2/2024
*/

#include <iostream>
using namespace std;

// Declare functions
void choosebutton1();
void choosebutton2();
void choosebutton3();

int main()
{
//Declare variables
    int choice;

//Ask the question
    cout << "What button do you choose 1, 2, or 3" << endl;
    cout << "Type 1, 2, or 3: ";
    cin >> choice;

    //Do if statements
    if (1 == choice)
    {
        choosebutton1();
    }
    else if (2 == choice)
    {
        choosebutton2();
    }
    else if (3 == choice)
    {
        choosebutton3();
    }
    else
    {
        cout << "I'm sorry that's not a valid choice." << endl;
    }

    cout << "Thank you for playing!" << endl;

    return 0;
}

//Make function do something
void choosebutton1()
{
    cout << "You chose Button 1" << endl;
    cout << "You win and get to go to Hawaii!" << endl;
}

void choosebutton2()
{
    cout << "You chose Button 2" << endl;
    cout << "You win and get a random street dog!" << endl;
}
void choosebutton3()
{
    cout << "You chose Button 3" << endl;
    cout << "You win and get toilet paper!" << endl;
}

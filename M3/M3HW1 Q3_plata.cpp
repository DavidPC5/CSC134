/*
CSC 134
M3HW1 Q3 - silver
David Plata Cruz
3/3/2024
*/
#include <iostream>
using namespace std;

//Declare fucntions
void Answerfight();
void Answerrun();
void Answer1();
void Answer2();
void Answer3();
void Answer4();

int main()
{
    cout << "Question 3: Choose your Adventure" << endl;
    //Delcare choice option
    int choice;

    //Ask the question
    cout << "You are being hunted by a bear." << endl;
    cout << "Do you fight it or run." << endl;
    cout << "1 for fight, 2 for run: ";
    cin >> choice;

    // create if statments
    if (1 == choice) {
        Answerfight();
        cout << "Do you use your sword or your fist?" << endl;
        cout << "1 for sword, 2 for first: ";
        cin >> choice;
        if (1 == choice) {
            Answer1();
        }
        else if (2 == choice) {
            Answer2();
        }
    }
    else if (2 == choice) {
        Answerrun();
        cout << "Do you want to run into your house or into a ditch" << endl;
        cout << "1 for house 2 for ditch: ";
        cin >> choice;
        if (1 == choice)
        {
            Answer3();
        }

        else if (2 == choice)
        {
            Answer4();
        }
    }
    else {
        cout << "Sorry, Its Ok if you are not sure" << endl;
    }

    return 0;
}

// enter functions and define
void Answerfight() 
{
    cout << "Ok, so we're fighting!" << endl;
}

void Answerrun() 
{
    cout << "Ok, let's run!" << endl;
}

void Answer1() 
{
    cout << "You take out your sword and defeat the bear." << endl;
}

void Answer2() 
{
    cout << "You get eaten, because your dumb." << endl;
}

void Answer3()
{
    cout << "You made it into the house and you're safe ... for now." << endl;
}

void Answer4()
{
    cout << "The bear has found you, and eats you." << endl;
}


//CSC 134
//M1HW1 - Movie talk
//David Plta Cruz
//2/4/24

#include <iostream>
using namespace std;

int main()
{
    //declare variables
    string movie_name = "Donnie Darko";
    string name = "Donnie";
    string dude = "Frank";
    int year = 2001;
    double bog = 7.5;
    // bog is box office gross

    // print the output
    cout << "The movie " << movie_name << " came out in " << year << " and grossed over " << bog << " million dollars." << endl << endl;

    //Brief summary about the movie
    cout << movie_name << " is a " << year << " film following a troubled teen. " << name << " who experiences strange visions" << endl;
    cout << "involving a mysterious rabbit named " << dude << ". The movie delves into themes of time travel and existentialism," << endl;
    cout << "gaining a cult following for its enigmatic plot." << endl << endl;

    //print 4-5 lines of quotes, favorite scenes, and interesting info
    cout << "This is my favorite movie and I think my favorite scene is when Donnie meets frank" << endl;
    cout << "One of my favorite quotes is \"28 days, 6 hours , 42 minutes, 12 seconds. That is when the world will end.\"" << endl;
    cout << "Another of my favorite quotes is \"Why are you wearing that stupid man suit?\"" << endl;
    cout << "The movie is more of a cult classic rather than a famous movie." << endl;
    cout << "Throughout the movie there is a run theme about why do we exist and what happens at the end,"<< endl;
    cout << "this is because Donnie now knows that the world will end in 28 days." << endl << endl;
    


    return 0;
}
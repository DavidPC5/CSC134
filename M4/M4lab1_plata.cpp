//CSC 134
//M4Lab1
//David Plata Cruz
//3/6/24

#include <iostream>
using namespace std;

int main()
{
    cout << "M4Lab1" << endl;
    //TODO: ask user for width and height
    int height;
    int width;
    cout << "Height: ";
    cin >> height;
    cout << "Width: ";
    cin >> width;


    //first a row
    for (int i=0; i < width; i++){
        cout << "# ";

    }

    cout << endl << endl;


    //next column
    for (int i=0; i < height; i++){
        cout << "#" << endl;
    }

    cout << endl << endl;


    //put it together
    for (int i=0; i < height; i++){
        for (int j=0; j < width; j++){
            cout << "# ";
        }
           cout << endl;
    }

    return 0;
}

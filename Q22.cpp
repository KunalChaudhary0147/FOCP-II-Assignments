/*A CAD tool generates rectangular hollow frames. Implement a solution to display:
********
* *
* *
* *
* *
* *
* *
*********/

#include <iostream>
using namespace std;

int main()
{
    int length, breadth;
    cout << "Enter length and breadth of the frame: ";
    cin >> length >> breadth;

    for (int i = 1; i <= breadth; i++) {
        for (int j = 1; j <= length; j++) {
            if (i == 1 || i == breadth || j == 1 || j == length) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
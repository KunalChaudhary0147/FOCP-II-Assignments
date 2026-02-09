/*A jewelry design tool generates hollow diamond outlines for patterns. Implement a solution to display a
hollow diamond pattern of *.
*
* *
* *
* *
* *
* *
* *
* *
**/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> n;

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
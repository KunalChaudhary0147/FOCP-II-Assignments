/*A fireworks display system arranges sparks in butterfly style. Implement a solution to display a butterfly
star pattern.*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of rows for the butterfly pattern: ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Left wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces between wings
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n; i >= 1; i--) {
        // Left wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces between wings
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
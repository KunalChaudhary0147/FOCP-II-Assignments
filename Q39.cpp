/*In software applications such as data analytics and probability systems, combinatorial values are frequently
required. To ensure efficiency, developers avoid factorial-based solutions and use iterative logic with loops.
As a Junior Software Developer, design a C++ program to generate Pascal’s Triangle for a given number of
rows.*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int numRows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    for (int i = 0; i < numRows; ++i) {
        int value = 1; // First value in each row is always 1
        // Print leading spaces for formatting
        for (int space = 0; space < numRows - i - 1; ++space) {
            cout << " ";
        }
        for (int j = 0; j <= i; ++j) {
            cout << value << " ";
            // Calculate next value in the row using the formula
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}
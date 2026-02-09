/*A data analytics tool flips rows and columns for better visualization. Implement a solution to
store a 3×3 matrix and compute its transpose.*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    const int size = 3;
    int matrix[size][size];
    int transpose[size][size];

    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Compute transpose of the matrix
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the transpose matrix
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
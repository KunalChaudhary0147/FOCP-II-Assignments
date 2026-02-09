/*A graphics rendering engine adds pixel intensity matrices. Implement a solution to store two
3×3 matrices and compute their sum.*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    const int size = 3;
    int matrixA[size][size];
    int matrixB[size][size];
    int sumMatrix[size][size];

    cout << "Enter elements of first 3x3 matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter elements of second 3x3 matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrixB[i][j];
        }
    }

    // Compute sum of the two matrices
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Display the sum matrix
    cout << "Sum of the two matrices:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
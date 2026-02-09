/*A machine learning model multiplies matrices for neural network layers. Implement a solution
to multiply two matrices of order m×n and p×q (if valid).*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int m, n, p, q;

    cout << "Enter rows and columns for first matrix (m n): ";
    cin >> m >> n;
    cout << "Enter rows and columns for second matrix (p q): ";
    cin >> p >> q;

    if (n != p) {
        cout << "Matrix multiplication not possible. Number of columns in first matrix must equal number of rows in second matrix." << endl;
        return 0;
    }

    int matrixA[m][n];
    int matrixB[p][q];
    int result[m][q];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < q; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrixB[i][j];
        }
    }

    // Initialize result matrix to zero
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j) {
            for (int k = 0; k < n; ++k) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Display the result matrix
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
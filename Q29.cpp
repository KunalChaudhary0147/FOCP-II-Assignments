/*A data processing system classifies even and odd inputs separately. Implement a solution to
store 5 elements in an array, compute sum of all even and sum of all odd numbers.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int elementCount = 5;
    int numbers[elementCount];
    int sumEven = 0;
    int sumOdd = 0;

    cout << "Enter " << elementCount << " integers:" << endl;
    for (int i = 0; i < elementCount; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < elementCount; ++i) {
        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;

    return 0;
}
/*A manufacturing QC system checks defect codes divisible by both 3 and 5.
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int elementCount = 5;
    int numbers[elementCount];
    int countDivBy3And5 = 0;

    cout << "Enter " << elementCount << " defect codes (integers):" << endl;
    for (int i = 0; i < elementCount; ++i) {
        cout << "Defect code " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < elementCount; ++i) {
        if (numbers[i] % 3 == 0 && numbers[i] % 5 == 0) {
            countDivBy3And5++;
        }
    }

    cout << "Total numbers divisible by both 3 and 5: " << countDivBy3And5 << endl;

    return 0;
}
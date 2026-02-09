/*A stock market app tracks first and second highest stock values. Implement a solution to find the largest
and second largest number in an array of size 5.*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    const int elementCount = 5;
    int stocks[elementCount];
    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;

    cout << "Enter " << elementCount << " stock values:" << endl;
    for (int i = 0; i < elementCount; ++i) {
        cout << "Stock " << (i + 1) << ": ";
        cin >> stocks[i];
    }

    for (int i = 0; i < elementCount; ++i) {
        if (stocks[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = stocks[i];
        } else if (stocks[i] > secondLargest && stocks[i] != firstLargest) {
            secondLargest = stocks[i];
        }
    }

    cout << "First largest stock value: " << firstLargest << endl;
    if (secondLargest != INT_MIN) {
        cout << "Second largest stock value: " << secondLargest << endl;
    } else {
        cout << "There is no second largest stock value." << endl;
    }

    return 0;
}
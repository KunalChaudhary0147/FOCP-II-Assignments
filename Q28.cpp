/*A supermarket software maintains item price lists. Implement a solution to store the prices of 10
items in an array and display the maximum price.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int itemCount = 10;
    double prices[itemCount];
    double maxPrice;

    cout << "Enter the prices of " << itemCount << " items:" << endl;
    for (int i = 0; i < itemCount; ++i) {
        cout << "Item " << (i + 1) << ": ";
        cin >> prices[i];
    }

    maxPrice = prices[0];
    for (int i = 1; i < itemCount; ++i) {
        if (prices[i] > maxPrice) {
            maxPrice = prices[i];
        }
    }

    cout << "The maximum price among the items is: " << maxPrice << endl;

    return 0;
}
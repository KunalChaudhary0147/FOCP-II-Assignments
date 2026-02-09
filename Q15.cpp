/*A data analytics tool finds the maximum sales figure from multiple entries.
Implement a solution to accept ‘n’ numbers and display the largest.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of sales entries: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of entries." << endl;
        return 1;
    }

    double maxSales, currentSales;
    cout << "Enter sales figure 1: ";
    cin >> maxSales;

    for (int i = 2; i <= n; ++i) {
        cout << "Enter sales figure " << i << ": ";
        cin >> currentSales;
        if (currentSales > maxSales) {
            maxSales = currentSales;
        }
    }

    cout << "The maximum sales figure is: " << maxSales << endl;

    return 0;
}
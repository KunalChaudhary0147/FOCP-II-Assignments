/*A weather monitoring app records 30-day temperature logs. Implement a solution to store daily
temperatures in an array and display the minimum temperature for the month.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int daysInMonth = 30;
    double temperatures[daysInMonth];

    cout << "Enter the daily temperatures for " << daysInMonth << " days:" << endl;
    for (int i = 0; i < daysInMonth; ++i) {
        cout << "Day " << (i + 1) << ": ";
        cin >> temperatures[i];
    }

    double minTemperature = temperatures[0];
    for (int i = 1; i < daysInMonth; ++i) {
        if (temperatures[i] < minTemperature) {
            minTemperature = temperatures[i];
        }
    }

    cout << "The minimum temperature for the month is: " << minTemperature << " degrees." << endl;

    return 0;
}
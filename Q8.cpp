/*A monitoring system generates a sequence of numeric event IDs from 1 to N.
To make logs easier to analyse, the system applies tags to certain events based on predefined rules:
• Events whose ID is divisible by 3 are tagged as “Buzz”
• Events whose ID is divisible by 5 are tagged as “Fuzz”
• Events divisible by both 3 and 5 receive both tags*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        cout << "Event ID " << i << ": ";

        bool tagged = false;
        if (i % 3 == 0) {
            cout << "Buzz";
            tagged = true;
        }
        if (i % 5 == 0) {
            if (tagged) cout << " ";
            cout << "Fuzz";
            tagged = true;
        }
        if (!tagged) {
            cout << "No Tag";
        }
        cout << endl;
    }

    return 0;
}
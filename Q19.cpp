/*A network security system generates prime numbers in a range for encryption key pools. Implement a
solution to find all prime numbers within a given range.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int lower, upper;
    cout << "Enter the lower and upper bounds of the range: ";
    cin >> lower >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are: " << endl;

    for (int num = lower; num <= upper; num++) {
        if (num <= 1) continue; // Skip numbers less than or equal to 1

        bool is_prime = true;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}
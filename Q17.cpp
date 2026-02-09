/*A learning application analyzes numbers for mathematical properties.
Design a solution to check whether a given number is a Perfect number or an Armstrong number.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check for Perfect Number
    int sum_of_divisors = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum_of_divisors += i;
        }
    }

    if (sum_of_divisors == number) {
        cout << number << " is a Perfect number." << endl;
    } else {
        cout << number << " is not a Perfect number." << endl;
    }

    // Check for Armstrong Number
    int temp = number;
    int digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = number;
    double sum_of_powers = 0;
    while (temp != 0) {
        sum_of_powers += pow(temp % 10, digits);
        temp /= 10;
    }

    if (sum_of_powers == number) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
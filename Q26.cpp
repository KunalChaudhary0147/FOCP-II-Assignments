/*security system generates list of prime keys within given range. Implement a solution to display all
prime numbers between two limits.
A web-based application enforces strong password policies during user registration to improve account security.
The system requires that every password must satisfy the following conditions:
• Contain at least one uppercase letter (A–Z)
• Contain at least one lowercase letter (a–z)
• Contain at least one digit (0–9)
• Contain at least one special character from the set
@ # $ % ! & *
You are required to develop the code so that the password validation logic can be implemented in the application.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string password;
    cout << "Enter the password to validate: ";
    cin >> password;

    bool has_upper = false, has_lower = false, has_digit = false, has_special = false;

    for (char ch : password) {
        if (isupper(ch)) has_upper = true;
        else if (islower(ch)) has_lower = true;
        else if (isdigit(ch)) has_digit = true;
        else if (ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '!' || ch == '&' || ch == '*') {
            has_special = true;
        }
    }

    if (has_upper && has_lower && has_digit && has_special) {
        cout << "Password is valid." << endl;
    } else {
        cout << "Password is invalid. It must contain at least one uppercase letter, one lowercase letter, one digit, and one special character (@ # $ % ! & *)." << endl;
    }

    return 0;
}
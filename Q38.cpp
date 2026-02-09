/*A registration system rejects usernames that contain spaces or special characters. Write a C++
program to validate whether a given string can be accepted as a username.*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    string username;
    bool isValid = true;

    cout << "Enter a username: ";
    getline(cin, username);

    for (char ch : username) {
        if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))) {
            isValid = false;
            break;
        }
    }

    if (isValid) {
        cout << "Username is valid." << endl;
    } else {
        cout << "Username is invalid. It should not contain spaces or special characters." << endl;
    }

    return 0;
}
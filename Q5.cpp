/*A student wants to swap the values of two variables for practising coding basics.
Implement a solution to swap two numbers using different techniques. ask the user by which method he wants to swap the number*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;
    int choice;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Choose method to swap:\n1. Using temporary variable\n2. Using arithmetic operations\n3. Using XOR operation\n";
    cin >> choice;

    switch(choice)
    {
        case 1:
            temp = num1;
            num1 = num2;
            num2 = temp;
            break;
        case 2:
            num1 = num1 + num2;
            num2 = num1 - num2;
            num1 = num1 - num2;
            break;
        case 3:
            num1 = num1 ^ num2;
            num2 = num1 ^ num2;
            num1 = num1 ^ num2;
            break;
        default:
            cout << "Invalid choice!";
    }

    cout << "After swapping: " << endl;
    cout << "num1 = " << num1 << ", Num2 = " <<num2;

    return 0;
}
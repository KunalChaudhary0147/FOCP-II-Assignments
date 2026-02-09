/*A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to
check the triangle type based on its sides.*/

#include <iostream>
using namespace std;

int main()
{
    double sideA, sideB, sideC;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> sideA >> sideB >> sideC;

    if (sideA <= 0 || sideB <= 0 || sideC <= 0) {
        cout << "Invalid side lengths. All sides must be positive." << endl;
    } else if (sideA == sideB && sideB == sideC) {
        cout << "The triangle is Equilateral." << endl;
    } else if (sideA == sideB || sideB == sideC || sideA == sideC) {
        cout << "The triangle is Isosceles." << endl;
    } else {
        cout << "The triangle is Scalene." << endl;
    }

    return 0;
}
/*The school report card system stores subject marks for each student.
Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int numSubjects = 5;
    double marks[numSubjects];
    double total = 0.0;

    cout << "Enter marks for " << numSubjects << " subjects:" << endl;
    for (int i = 0; i < numSubjects; ++i) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    double percentage = (total / (numSubjects * 100)) * 100; // Assuming each subject is out of 100

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
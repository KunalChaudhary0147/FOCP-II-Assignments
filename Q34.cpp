/*A grading system stores marks of multiple students in arrays. Implement a solution to accept
marks in 5 subjects for 3 students, then display:
• marks in 2nd subject of 1st student, and
• marks in 5th subject of 3rd student.*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    const int studentCount = 3;
    const int subjectCount = 5;
    int marks[studentCount][subjectCount];

    // Input marks for each student
    for (int i = 0; i < studentCount; ++i) {
        cout << "Enter marks for Student " << (i + 1) << " in " << subjectCount << " subjects:" << endl;
        for (int j = 0; j < subjectCount; ++j) {
            cout << "Subject " << (j + 1) << ": ";
            cin >> marks[i][j];
        }
    }

    // Display required marks
    cout << "Marks in 2nd subject of 1st student: " << marks[0][1] << endl;
    cout << "Marks in 5th subject of 3rd student: " << marks[2][4] << endl;

    return 0;
}
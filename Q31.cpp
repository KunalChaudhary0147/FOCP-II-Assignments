/*A payroll system maintains employee salary records. Implement a solution to accept salary of
10 employees in an array, compute total salary and average salary, then display the result.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int employeeCount = 10;
    double salaries[employeeCount];
    double totalSalary = 0.0;

    cout << "Enter the salaries of " << employeeCount << " employees:" << endl;
    for (int i = 0; i < employeeCount; ++i) {
        cout << "Salary of employee " << (i + 1) << ": ";
        cin >> salaries[i];
        totalSalary += salaries[i];
    }

    double averageSalary = totalSalary / employeeCount;

    cout << "Total Salary: " << totalSalary << endl;
    cout << "Average Salary: " << averageSalary << endl;

    return 0;
}
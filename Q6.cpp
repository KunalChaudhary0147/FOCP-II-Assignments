/*An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker.
Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and
display results.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        double basicSalary;
        cout << "\nEnter basic salary for employee " << i << ": ";
        cin >> basicSalary;

        double bonus = 0.12 * basicSalary;
        double netSalary = basicSalary + bonus;

        cout << "\nEmployee " << i << " - Basic Salary: " << basicSalary
             << ", Bonus: " << bonus
             << ", Net Salary: " << netSalary << endl;
    }

    return 0;
}
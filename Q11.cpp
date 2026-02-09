/*A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
expenses and apply a discount accordingly.*/

#include <iostream>
using namespace std;

int main()
{
    int quantity;
    double pricePerItem = 5.0; // Assuming each item costs $5.0
    double totalExpense, discount = 0.0;

    cout << "Enter the quantity of items ordered: ";
    cin >> quantity;

    totalExpense = quantity * pricePerItem;

    if (quantity > 1000) {
        discount = totalExpense * 0.10; // 10% discount
    }

    totalExpense -= discount;

    cout << "Total expense after discount (if applicable): $" << totalExpense << endl;

    return 0;
}
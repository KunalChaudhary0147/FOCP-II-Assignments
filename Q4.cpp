/*A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase.
Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.*/

#include <iostream>
using namespace std;

int main()
{
    int quantity;
    float unit_price, total_amount, discount, final_amount;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter unit price: ";
    cin >> unit_price;

    total_amount = quantity * unit_price;
    discount = total_amount * 0.20;
    final_amount = total_amount - discount;

    cout << "Total amount after 20% discount: " << final_amount << endl;

    return 0;
}
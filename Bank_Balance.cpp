/*Given Q queries of the following types:
• CREATE X Y
o Create a user account with a user ID X and an initial balance of Y dollars.
o If the user is already present with the user ID X then add Y dollars to their account.
o You need to return true only when you create a new account (which means a user with a user
ID X is not present); otherwise, return false.
• DEBIT X Y
o Debit Y dollars from the user's bank account with user ID X.
o If the user with user ID X is not present or has less than Y dollars, then do nothing and return
false.
o Otherwise, debit Y dollars and return true.
• CREDIT X Y
o Credit Y dollars to the user's bank account with user ID X.
o If the user with user ID X is not present, then do nothing and return false.
o Otherwise, credit Y dollars and return true.
• BALANCE X
o Return the user's bank balance with the user ID X.
o If the user with user ID X is not present, then return -1.
Class description
• Bank: Represents information about the users
• Public functions: Refers to the types of queries (described above) that must be implemented
Input format for custom testing
Note: Use this input format if you are testing against custom input or writing code in a language
where we don’t provide boilerplate code.
• The first line contains a single integer Q, denoting the number of elements in the array.
• Each of the next Q lines contains the query (case-sensitive for strings).
Output format
Return the result for each function method based on the query.*/

#include <bits/stdc++.h>
using namespace std;

class Bank {

private:

    unordered_map<int, int> accounts;

public:

    bool create(int userID, int initialBalance)
    {
        if (accounts.count(userID))
        {
            accounts[userID] += initialBalance;
            return false;
        }

        accounts[userID] = initialBalance;
        return true;
    }

    bool debit(int userID, int amount)
    {
        if (!accounts.count(userID) || accounts[userID] < amount)
        {
            return false;
        }

        accounts[userID] -= amount;
        return true;
    }

    bool credit(int userID, int amount)
    {
        if (!accounts.count(userID))
        {
            return false;
        }

        accounts[userID] += amount;
        return true;
    }

    int balance(int userID)
    {
        if (!accounts.count(userID))
        {
            return -1;
        }
        
        return accounts[userID];
    }
};

int main()
{
    Bank bank;

    int Q;
    cin >> Q;

    while (Q--)
    {
        string queryType;
        cin >> queryType;

        if (queryType == "CREATE")
        {
            int userID, initialBalance;
            cin >> userID >> initialBalance;
            cout << (bank.create(userID, initialBalance) ? "true" : "false") << endl;
        } 
        
        else if (queryType == "DEBIT")
        {
            int userID, amount;
            cin >> userID >> amount;
            cout << (bank.debit(userID, amount) ? "true" : "false") << endl;
        } 
        
        else if (queryType == "CREDIT")
        {
            int userID, amount;
            cin >> userID >> amount;
            cout << (bank.credit(userID, amount) ? "true" : "false") << endl;
        } 
        
        else if (queryType == "BALANCE")
        {
            int userID;
            cin >> userID;
            cout << (bank.balance(userID) == -1 ? "NO USER ID FOUND" : to_string(bank.balance(userID))) << endl;
        }
    }
    return 0;
}
/*Assume that there are 100 slots available for every movie.
Given Q queries of the following types:
• BOOK X Y
o Allow a customer with a unique ID X to book a ticket for a movie with the movie ID Y.
o If the customer has already booked a ticket for the same movie or the movie is sold out,
return false.
o Otherwise, mark the ticket as booked and return true.
• CANCEL X Y
o Allow a customer with a unique ID X to cancel a booked ticket for a movie with the movie ID
Y.
o If the customer has not booked a ticket for the movie, return false.
o Otherwise, mark the ticket as canceled and return true.
• IS_BOOKED X Y
o Check if a customer with a unique ID X has booked a ticket for the movie with the movie ID Y.
o Return true if booked; otherwise, return false.
• AVAILABLE_TICKETS Y
o Return the number of available tickets for the movie with the movie ID Y.
Class description
• MovieTicket: Represents information about the users and movies
• Public functions: Refers to the types of queries (described above) that must be implemented
Input format for custom testing
Note: Use this input format if you are testing against custom input or writing code in a language
where we don’t provide boilerplate code.
• The first line contains a single integer Q, denoting the number of elements in the array.
• Each of the next Q lines contains the query (case-sensitive for strings).
Output format
Return the result for each function method based on the query.
6. Problem Name: Bank Balance*/

#include <bits/stdc++.h>
using namespace std;

class MovieTicket {

private:

    unordered_map<int, unordered_set<int>> bookings;
    unordered_map<int, int> availableTickets;

    
public:
    MovieTicket()
    {
        for (int i = 1; i <= 100; i++)
        {
            availableTickets[i] = 100;
        }
    }

    bool book(int customerID, int movieID)
    {
        if (availableTickets[movieID] == 0 || bookings[movieID].count(customerID))
        {
            return false;
        }

        bookings[movieID].insert(customerID);
        availableTickets[movieID]--;
        return true;
    }

    bool cancel(int customerID, int movieID)
    {
        if (!bookings[movieID].count(customerID))
        {
            return false;
        }

        bookings[movieID].erase(customerID);
        availableTickets[movieID]++;
        return true;
    }

    bool isBooked(int customerID, int movieID) {
        return bookings[movieID].count(customerID) > 0;
    }

    int availableTicketsCount(int movieID) {
        return availableTickets[movieID];
    }

};

int main() {
    MovieTicket m;

    int Q;
    cin >> Q;

    while (Q--)
    {
        string queryType;
        cin >> queryType;

        if (queryType == "BOOK")
        {
            int customerID, movieID;
            cin >> customerID >> movieID;
            cout << (m.book(customerID, movieID) ? "true" : "false") << endl;
        }
        
        else if (queryType == "CANCEL")
        {
            int customerID, movieID;
            cin >> customerID >> movieID;
            cout << (m.cancel(customerID, movieID) ? "true" : "false") << endl;
        }
        
        else if (queryType == "IS BOOKED")
        {
            int customerID, movieID;
            cin >> customerID >> movieID;
            cout << (m.isBooked(customerID, movieID) ? "true" : "false") << endl;
        }
        
        else if (queryType == "AVAILABLE TICKETS")
        {
            int movieID;
            cin >> movieID;
            cout << m.availableTicketsCount(movieID) << endl;
        }
    }

    return 0;
}

/*A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
convert Fahrenheit temperature into Centigrade or vice versa.*/

#include <iostream>
using namespace std;

int main()
{
    float f, c;
    int choice;

    cout<<"Menu\n1. Fahrenheit to Centigrade\n2. Centigrade to Fahrenheit\n";
    
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Enter temperature in Fahrenheit: ";
            cin>>f;
            c = (f - 32) * 5.0 / 9.0;
            cout<<"Temperature in Centigrade: "<<c;
            break;

        case 2:
            cout<<"Enter temperature in Centigrade: ";
            cin>>c;
            f = (c * 9.0 / 5.0) + 32;
            cout<<"Temperature in Fahrenheit: "<<f;
            break;

        default:
            cout<<"Invalid choice!";
    }

    return 0;
}
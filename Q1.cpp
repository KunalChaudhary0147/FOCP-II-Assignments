/*A teacher wants to calculate the average marks of three students to determine the class performance.
Implement a solution to accept three numbers and compute their average.*/

#include <iostream>
using namespace std;

int main()
{
    float a,b,c;

    cout<<"Enter marks of first student: ";
    cin>>a;

    cout<<"Enter marks of second student: ";
    cin>>b;

    cout<<"enter marks of third student : ";
    cin>>c;

    cout<<"Avg marks of students are : "<<(a+b+c)*1.0/3;

    return 0;
}
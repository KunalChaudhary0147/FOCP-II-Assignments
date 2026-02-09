/*An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute
the area of a circle.*/

#include <iostream>
using namespace std;

int main()
{
    float r;

    cout<<"Enter radius of the circular fountain: ";
    cin>>r;

    cout<<"Space covered by the fountain: "<<r*r*3.14;

    return 0;
}
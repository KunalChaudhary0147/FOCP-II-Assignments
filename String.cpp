//Input and print string and get line method

#include <iostream>
using namespace std;

int main()
{

    std::string name="FOCP II";
    int a=10;
    float b=5;
    char c='a';

    std::string test;

    cout<<"A, B, C, string\n";
    cin>>a>>b>>c;
    cin.ignore();
    getline(cin, test);
    
    std::cout<<"Value of integer="<<a<<std::endl<<"Value of float="<<b<<std::endl<<"Value of char="<<c<<endl<<"String="<<test;

    return 0;
}
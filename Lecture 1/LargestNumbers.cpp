#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a : "<<endl;
    cin>>a;

    int b;
    cout<<"Enter b : "<<endl;
    cin>>b;

    int c;
    cout<<"Enter c : "<<endl;
    cin>>c;

    if(a > b && c)
    {
        cout<<"A is greater "<<a<<endl;
    }
    
    if(b > a &&c)
    {
        cout<<"B is greater "<<b<<endl;
    }

    if(c > a&& b)
    {
        cout<<"C is greater "<<c<<endl;
    }
} 

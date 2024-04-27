#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    float Tax;

    if(n < 5)
    {
       Tax = 0;
    }
    else if(n <= 10 )
    {
        Tax = 0.2 * n;
    }

    else{
        Tax = 0.3 * n;
    }

    cout<<"Tax is "<<(Tax * 100000)<<endl;

    return 0;
}
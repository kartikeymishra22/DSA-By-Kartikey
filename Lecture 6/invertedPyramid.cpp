#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int row = 1;
    for(int i = 1; i<=n; i++)
    {
        int space = 1;
        for(int k = 1; k<=n - row; k++)
        {
            cout<<" ";
        }
        int column  = 1;
        for(int j =1; j<=row; j++)
        {
            cout<<"*";
            column++;
        }
        cout<<endl;
        row++;
    }
}
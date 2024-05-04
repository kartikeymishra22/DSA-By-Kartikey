#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row = 1;
    int num = 1;
    for(int i = 1; i<=n; i++)
    {
        int column = 1;
        for(int j = 1; j<=row; j++)
        {
            cout<<num<<" ";
            num++;
            column++;
        }
        cout<<endl;
        row++;
    }
}
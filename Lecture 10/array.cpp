#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};

    int n = sizeof(arr) / sizeof(int);

    cout<<sizeof(arr)<<endl;

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
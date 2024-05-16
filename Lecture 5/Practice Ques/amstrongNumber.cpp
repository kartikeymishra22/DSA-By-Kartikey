#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int cubesum = 0;

    while(n>0)
    {
        int lastdigit = n % 10;
        cubesum += (lastdigit * lastdigit * lastdigit);
        n = n/10;
    }

    if(n == cubesum)
    {
        cout<<"Amstrong Number"<<endl;
    }
    else{
        cout<<"Not a amsrtong number"<<endl;
    }

    return 0;
}
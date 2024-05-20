#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a num : ";
    cin>>n;

    int pow = 1;
    int binNum = 0;

    while(n > 0){
        int rem = n % 2;
        binNum += (rem * pow);
        n = n/2;
        pow = pow * 10;
    }
    cout<<binNum<<endl;
}
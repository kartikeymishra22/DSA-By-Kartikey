#include<iostream>
using namespace std;

int sumDigit(int n)
{
    int sum = 0;
    while(n > 0)
    {
        int lastdigit = n % 10;
        sum = sum + lastdigit;
        n = n/ 10;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the Number -> ";
    cin>>n;

    int sum = sumDigit(n);
    cout<<sum<<endl;

    return 0;

}

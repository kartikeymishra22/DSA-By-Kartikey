#include<iostream>
using namespace std;

int product(int a, int b)
{
    int sum = a * b;
    return sum;
}

int main()
{

    int sum = product(3,4);
    cout<<"Sum is -> "<<sum<<endl;
    return 0;
}

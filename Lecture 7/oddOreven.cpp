#include<iostream>
using namespace std;

bool isEven(int n)
{
    if(n % 2 == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int a = isEven(15);
    cout<<a<<endl;
    return 0;

}
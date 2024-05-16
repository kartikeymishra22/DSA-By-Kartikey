#include<iostream>
using namespace std;

int reverse(int n)
{
    int sum = 0;
    while(n> 0)
    {
        int digit = n % 10;
        sum = sum * 10 + digit;
        n = n/ 10;
    }

    return sum;

}

 
bool isPalindrome(int num)
 { 
    int revNum = reverse(num); 
    return num == revNum; 
}

int main()
{
    int sum = isPalindrome(123);
    cout<<sum<<endl;
}
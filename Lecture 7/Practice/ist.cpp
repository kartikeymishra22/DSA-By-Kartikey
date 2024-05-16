#include<iostream>
using namespace std;

void palindromeNum( int n){
    int original = n;
    int res = 0;
    while(n > 0){
        int digit = n % 10;
        res = res * 10 + digit;
        n = n/10;
    }

    if(res == original){
        cout<<"Palindrome Number"<<endl;
    }
    else{
        cout<<"Not a Paindrome number"<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    palindromeNum(n);
    return 0;
}
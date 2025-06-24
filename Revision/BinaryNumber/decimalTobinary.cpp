#include<iostream>
#include<cmath>
using namespace std;

int decimalTobinary(int n){
    int result = 0; 
    int pow = 1;
    while(n>0){
        int digit = n%2;
        result += digit * pow;
        n /= 2;
        pow = pow * 10;
    }

    return result;
}

int main(){
    int n;
    cout<<"Enter a decimal number : ";
    cin>>n;

    cout<<"Binary number is : -> "<<decimalTobinary(n)<<endl;

    return 0;


}
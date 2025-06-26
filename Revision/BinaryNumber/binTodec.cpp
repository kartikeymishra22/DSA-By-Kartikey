#include<iostream>
using namespace std;

int binTodec(int n){
    int result = 0;
    int i = 1; 

    while(n>0){
        int digit = n % 10; // Get the last digit
        result = result + i * digit; // Shift result left and add the digit
        n = n / 10; // Remove the last digit
        i = i * 2; // Increment the power of 2
    }   
    return result; // Return the decimal result
}

int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;

    cout<<"Decimal equivalent: "<<binTodec(n)<<endl;
    return n;

}
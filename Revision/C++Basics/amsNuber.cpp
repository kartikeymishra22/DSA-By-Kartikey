#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum = 0;
    int num = n; // Store the original number for comparison later

    while(num>0){ // Store the original number for comparison later
        int digit = num % 10; // Get the last digit
        sum += (digit*digit*digit);       // Add it to the sum
        num /= 10;            // Remove the last digit
    }

    if(sum == n){
        cout<<"The number is an Armstrong number."<<endl;
    } else {
        cout<<"The number is not an Armstrong number."<<endl;
    }

    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

int decTobin(int n){
    int result = 0;
    int pow = 1;
    while(n>0){
        int digit = n%2;
        result = result + digit  * pow;
        n /= 2;
        pow *= 10;
    }

    return result;
}

int decTobin1(int &n){
    int result = 0;
    int i = 0;
 // Store original value of n for debugging

    while(n > 0){
        int bit = n &1;
        result += bit * round(pow(10,i));
        n = n>>1;
        i++;
    }
    return result;

}

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"Binary number is : "<<decTobin1(n)<<endl;

    return 0;

}
#include<iostream>
using namespace std;

int reverse(int n){
    if(n==0){
        return 0;
    }
    cout<<n%10;
    reverse(n/10);
}

int main(){

    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"The reverse of the number is: ";
    reverse(n);


}
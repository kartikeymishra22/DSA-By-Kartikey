#include<iostream>
using namespace std;

int setIthBit(int n, int i){
    int bitMask = 1<<i;
    return (n | bitMask);
}

int clearIthbit(int n, int i){
    int bitMask = (1<<i);
    return n^bitMask;
}

int main(){
    int n;
    cout<<"Enter the n number : ";
    cin>>n;

    int i ;
    cout<<"Enter the ith bit : ";
    cin>>i;

    // cout<<"Ith bit is set -> "<<setIthBit(n, i)<<endl;
    cout<<"Ith bit is cleared -> "<<clearIthbit(n, i)<<endl;

    return 0;
}
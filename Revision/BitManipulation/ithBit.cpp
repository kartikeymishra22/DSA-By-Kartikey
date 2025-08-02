#include<iostream>
using namespace std;

int ithBit(int n , int i){
    n = n>>i;
    return (n&1);
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int i;
    cout<<"Enter the Ith bit : ";
    cin>>i;
    
    cout<<"Ith bit is -> "<< ithBit(n, i)<<endl;

    return 0;

}
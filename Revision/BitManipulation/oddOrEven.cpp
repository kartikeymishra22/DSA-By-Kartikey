#include<iostream>
using namespace std;

void oddOrEven(int n){
    if(!(n&1)){
        cout<<"Even Number"<<endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    oddOrEven(n);

    return 0;


}
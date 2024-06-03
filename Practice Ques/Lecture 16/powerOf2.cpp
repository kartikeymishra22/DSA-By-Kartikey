#include<iostream>
using namespace std;

void pow(int n){
    if((n&(n-1))==0){
        cout<<"Power of 2"<<endl;
    } else{
        cout<<"Not power of 2"<<endl;
    }
}

int main(){

    pow(8);
}
#include<iostream>
using namespace std;

int friendsPairing(int n){

    if(n==1||n==2){
        return n;
    }

    return friendsPairing(n-1) + (n-1) * friendsPairing(n -2);
}

int main(){
    int res = friendsPairing(4);
    cout<<res<<endl;
}
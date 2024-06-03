#include<iostream>
using namespace std;

int countBits(int n){
    int count = 0;
    while(n){
        if(n&1 == 1){
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main(){

    int res = countBits(8);
    cout<<res<<endl;
    return 0;
}
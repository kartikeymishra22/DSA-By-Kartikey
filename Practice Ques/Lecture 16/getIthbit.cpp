#include<iostream>
using namespace std;

int getIthbit(int n, int i){
    int bitMask = (1<<i);

    if((n&bitMask) == 0){
        return 0;
    } else{
        return 1;
    }
}

int main(){

    int res = getIthbit(6,2);
    cout<<res<<endl;
}
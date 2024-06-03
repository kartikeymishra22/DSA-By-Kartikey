#include<iostream>
using namespace std;

int clear(int n, int i, int j){
    int a = (~0) << (j+1);
    int b = (1<<i) - 1;
    int mask = a|b;

    return n & mask;
}

int main(){

    int res = clear(15,1,3);
    cout<<res<<endl;
}
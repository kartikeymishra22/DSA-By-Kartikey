#include<iostream>
#include<vector>
using namespace std;

int fib(int x){
    if(x == 0 || x == 1){
        return x;
    }

    return fib(x-1) + fib(x-2);
}

int main(){
    int n = 6;

    cout<<fib(n)<<endl;
}

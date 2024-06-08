#include<iostream>
using namespace std;

int powOf(int x, int n){
    int ans = 1;
    while(n>0){
        int lastdigit = n & 1;
        if(lastdigit){
            ans = ans * x;
        }
        x = x * x;
        n = n>>1; 
    }

    return ans ;
}

int main(){

    int res = powOf(3,5);
    cout<<res<<endl;
}
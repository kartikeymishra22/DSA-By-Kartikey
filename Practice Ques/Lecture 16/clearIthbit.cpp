#include<iostream>
using namespace std;

int clearIthbit(int n, int i){
    int bitmask = ~(1<<i);

    return (n & bitmask);
}

int main(){

    int res = clearIthbit(6,1);
    cout<<res<<endl;

}
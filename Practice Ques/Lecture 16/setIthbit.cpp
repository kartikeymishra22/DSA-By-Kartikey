#include<iostream>
using namespace std;

int setIthbit(int n, int i){
    int bitmask = (1<<i);

    return (n | bitmask);
}

int main(){

    int res = setIthbit(4,3);
    cout<<res<<endl;

}
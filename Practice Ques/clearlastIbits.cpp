#include<iostream>
using namespace std;

void clearIbits(int n, int i){
    int bitmask = (~0)<<i;

    n = n & bitmask;

    cout<<n<<endl;
}

int main(){

    clearIbits(15,2);

}
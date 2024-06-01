#include<iostream>
using namespace std;

int setIthbit(int num , int i){
    int bitmask = (1<<i);

    return (num | bitmask);
}


int main(){

    cout<<setIthbit(6, 0)<<endl;

}
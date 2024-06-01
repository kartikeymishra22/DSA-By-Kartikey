#include<iostream>
using namespace std;

int clearIthbit(int num, int i){
    int bitmask = ~(1<<i);

    return (num & bitmask);
    
}

int main(){

   cout<<clearIthbit(6, 2)<<endl;;

}
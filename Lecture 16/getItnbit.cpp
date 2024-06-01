#include<iostream>
using namespace std;

int getIthbit(int num, int i){
    int bitmask = (1<<i);
    if((num & bitmask)== 0){
        return 0;
    }
    else { 
        return 1;
    }
}

int main(){

   cout<<getIthbit(6, 2)<<endl;;

}
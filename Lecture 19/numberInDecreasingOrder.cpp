#include<iostream>
using namespace std;

void decreasingOrder(int n){
    if(n == 0){
        return;
    }

    cout<<n<<" ";

    decreasingOrder(n - 1);
}

int main(){

    decreasingOrder(8);

}
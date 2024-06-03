#include<iostream>
using namespace std;

void update(int n, int i, int val){
    n = n & ~(1<<i);

    n = n | (val<<i);

    cout<<n<<endl;
}

int main(){

    update(4,3,1);

}
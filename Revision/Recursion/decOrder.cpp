#include<iostream>
using namespace std;

void decOrder(int n){
    if(n == 0){
        return;
    }

    decOrder(n-1);
    cout<<n<<endl;
}


int main(){
    int n;
    cin>>n;

    decOrder(n);

    return 0;
}
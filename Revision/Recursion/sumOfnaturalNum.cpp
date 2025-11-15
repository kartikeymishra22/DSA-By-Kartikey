#include<iostream>
using namespace std;

int sumOfNaturalNun(int n){
    if(n == 1){
        return 1;
    }

    return n + sumOfNaturalNun(n - 1);
}

int main(){
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;

    cout<<sumOfNaturalNun(n)<<endl;
    return 0;
}


#include<iostream>
using namespace std;

int clearIthBits(int n, int i){
    int mask = (~0)<<i;

    return mask & n;
}

int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;

    int i ;
    cout<<"Enter the i value : ";
    cin>>i;

    cout<<"Num is -> "<<clearIthBits(n, i)<<endl;

    return 0;

}
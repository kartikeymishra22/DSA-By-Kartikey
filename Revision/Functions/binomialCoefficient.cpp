#include<iostream>
using namespace std;

int binomialCoe(int n , int r){
    int factN = 1;
    int factR = 1;
    int factNR = 1;
    for(int i = 1; i<=n; i++){
        factN = factN * i;
    }

    for(int i = 1; i<=r; i++){
        factR *= i;
    }

    for(int i = 1; i<=(n-r); i++){
        factNR *= i;
    }

    return factN / (factNR * factR);

}

int main(){
    int n, r;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;

    cout<<"Binomial coefficent is : -> "<<binomialCoe(n, r)<<endl;

    return 0;
}
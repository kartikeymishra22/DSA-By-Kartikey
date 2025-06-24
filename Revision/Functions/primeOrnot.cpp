#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }

    for(int i = 2; i<n; i++){
        if(n%i == 0){
            return false;
            break;
        }
    }

    return true;
}

int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    if(isPrime(n) == false){
        cout<<"Given number is not prime"<<endl;
    }
    else{
        cout<<"Given number is prime"<<endl;
    }

    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }

    return 0;
}
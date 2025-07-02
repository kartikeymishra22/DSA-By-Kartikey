#include<iostream>
using namespace std;

bool primeOrNot(int n){
    bool isPrime = 1;
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if(primeOrNot(n)){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }

    return 0;
}



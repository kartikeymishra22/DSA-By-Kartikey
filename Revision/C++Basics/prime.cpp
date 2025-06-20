#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    bool isPrime = true;

    for(int i = 2; i<n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
 

    if(isPrime == true){
        cout<<"The Number "<<n<<" Is Prime";
    }
    else{
        cout<<"The Number "<<n<<" Is Not Prime";
    }

    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number -> ";
    cin>>n;

    for(int i=2; i<=n; i++) { 
    int curr = i; //current number to check for 
    bool isPrime = true; 
    for(int j=2; j*j<=i; j++) { 
    if(curr % j == 0) { 
    isPrime = false; 
    } 
    } 
    
    
    if(isPrime) { 
    cout << curr << " "; 
    } 
    } 
    cout << endl;
}


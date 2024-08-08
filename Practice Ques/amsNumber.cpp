#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int num =n;

    int dig1 = num%10;
    num= num/10;

    int dig2 = num%10;
    num= num/10;

    int dig3 = num%10;

    int sum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;

    if(sum == n){
        cout<<"Amstrong NUmber"<<endl;
    }
    else{
        cout<<"Not Amstrong Number"<<endl;
    }
}
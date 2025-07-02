#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int a = 2;
    while(a<n){
        if(n%a == 0){
            cout<<"Not Prime"<<endl;
            return 0;
        }
        a++;
    }
    cout<<"Prime"<<endl;

    return 0;

}
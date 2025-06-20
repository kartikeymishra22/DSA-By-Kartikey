#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    for(int i = 2; i<=n; i++){
        int j = 2;
        while(j < i){
            if(i%j == 0){
            break;
        }
        cout<<i<<endl;
        }
        
    }

    return 0;
}
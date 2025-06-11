#include<iostream>
using namespace std;

int catNum(int n){

    if(n ==0 || n == 1){
        return 1;
    }

    int ans = 0;

    for(int i = 0; i<n; i++){
        ans += catNum(i) * catNum(n- i - 1);
    }

    return ans;
}

int main(){
    int n ;
    cout<<"Enter the nth number : ";
    cin>>n;

    cout<<catNum(n)<<endl;

}
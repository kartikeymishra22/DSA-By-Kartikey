#include<iostream>
#include<cmath>
using namespace std;

int fastExpo(int x, int n){
    int power = 1;
    int ans = 1;

    while(n>0){
        if(n&1){
            ans = ans*(pow(x, power));
        }
        power = power*2;
        n = n>>1;
    }
    return ans;
}

int main(){
    int x;
    cout<<"Enter the valuse of x : ";
    cin>>x;

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    cout<<"The final answer is -> "<<fastExpo(x,n)<<endl;

    return 0;

}
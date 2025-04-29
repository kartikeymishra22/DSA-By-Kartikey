#include<iostream>
#include<vector>
using namespace std;

int tabFib(int n){
    vector<int> f(n+1, 0);
    f[0] = 0;
    f[1] = 1;

    for(int i = 2; i<=n; i++){
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}

int main(){
    int n ;
    cin>>n;

    cout<<tabFib(n)<<endl;

    return 0;

}
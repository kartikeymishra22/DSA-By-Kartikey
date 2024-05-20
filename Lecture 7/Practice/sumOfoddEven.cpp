#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int sum= 0;
    int sum1= 0;

    for(int i = 1;i<=n; i++){
        if(i % 2== 0){
            sum = sum + i;
        }
        else{
            sum1 = sum1 + i;
        }
    }
    cout<<sum<<" "<<sum1<<endl;

    return 0;
}
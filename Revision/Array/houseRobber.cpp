#include<iostream>
using namespace std;

int sum(int arr[], int n){
    int sum = 0;
    for(int i= 0; i<=n; i += 2){
        sum = sum + arr[i];
    }

    return sum;
}
int main(){
    int arr[4] = {1,2,3,1};

    cout<<"Sum is-> "<<(arr, 4)<<endl;
}

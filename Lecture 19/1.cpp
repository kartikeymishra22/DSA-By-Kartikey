#include<iostream>
using namespace std;

void func(int arr[], int n, int index){
    if(index == n){
        return;
    }
    cout<<arr[n- index - 1]<<" ";

    func(arr, n, index+1);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    
    func(arr,5,0);
}
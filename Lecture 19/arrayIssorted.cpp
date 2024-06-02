#include<iostream>
using namespace std;

bool isSorted(int arr[], int n, int index){

    if(index == n -1){
        return true;
    }

    if(arr[index] > arr[index + 1]){
        return false;
    }

    return isSorted(arr,n,index+1);
}

int main(){
    int arr[5] = {1,2,6,4,5};

    int res = isSorted(arr,5,0);
    cout<<res<<endl;
}
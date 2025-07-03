#include<iostream>
using namespace std;

// with extra space 
void reverseArray(int arr[], int n){
    int temp[5] = {};
    for(int i = n-1, idx = 0; i>=0; i--){
        temp[idx++] = arr[i];
    }
    cout<<endl;
    
    for(int i = 0; i<5; i++){
        cout<<temp[i]<<",";
    }
    cout<<endl;
}


int main(){
    int arr[5] = {23,6,7,82,2};
    int n = sizeof(arr)/sizeof(int);

    reverseArray(arr, n);

    return 0;

}
#include<iostream>
using namespace std;

void print(int *arr, int n){
   
    if(n== 0){
        return;
    }

    cout<<arr[0]<<" ";
    print(arr + 1, n-1);

}
void printArr(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;

    // cout<<*arr + 1<<endl;
    // printArr(arr, n);
    print(arr, n);
    return 0;
}
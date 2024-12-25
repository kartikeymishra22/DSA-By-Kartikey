#include<iostream>
using namespace std;

void printArray(int *arr, int n){
    if(n ==0){
        return;
    }

    cout<<arr[0]<<" ";
    printArray(arr+1, n-1);
}

// void printArray(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int main(){

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    printArray(arr, n);
 

}
#include<iostream>
using namespace std;

void toprint(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void selectionSort(int *arr, int n){
    for(int i = 0; i< n; i++){
        int minIndex = i;
        for(int j = i+ 1; j<n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    toprint(arr, n);
}

int main(){
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr)/sizeof(int);

    selectionSort(arr, n);

    return 0;

}

#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i= 0; i<n-1; i++){
        int minIdx = i;
        for(int j =i +1; j<n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

void print(int *arr, int n){
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[5] = {5,4,3,2,1};

    selectionSort(arr, 5);
    print(arr, 5);

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    // int arr[3][5];
    // for(int i = 0; i<3; i++){
    //     for(int j = 0; j<5; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // for(int i = 0; i<3; i++){
    //     for(int j = 0; j<5; j++){
    //         cout<<arr[i][j]<<",";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;

    // int *arr = new int[n];

    int n,m;
    cout<<"Enter the n and m : ";
    cin>>n>>m;

    int **arr = new int*[n];
    for(int i = 0; i<n; i++){
        arr[i] = new int[m];
    }

   

     for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
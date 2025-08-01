#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter the value of n : ";
    cin>>n;

    cout<<"Enter the value of m : ";
    cin>>m;

    int *arr = new int[n*m];

    int x = 1;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            arr[i*m + j] = x++;
        }
    }

    for(int i = 0; i<n ; i++){
       for(int j = 0; j<m; j++){
        cout<<arr[i*m + j]<<" ";
       }
       cout<<endl;
    }

     delete[] arr; // ✅ Free the memory
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int* arr = new int[n * m];

     for(int i = 0; i<n; i++){
        for(int j= 0; j<m; j++){
            cin>>arr[i*m+j];
        }
    }


    for(int i = 0; i<n; i++){
        for(int j= 0; j<m; j++){
            cout<<arr[i*m+j]<<",";
        }
        cout<<endl;
    }
    delete[] arr;

    return 0;
}
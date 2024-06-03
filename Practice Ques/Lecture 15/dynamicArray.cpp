#include<iostream>
using namespace std;

int main(){

    int size;
    cin>>size;

    // Dynamic array implementation in C++ using STL library.

    int *arr = new  int[size]; // Dynamic allocation of memory for an array with the given size.

    int x =1;
    for(int i =0; i<size; i++){
        arr[i] = x++;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete[] arr; // Deallocation of memory for an array with the given size.
}
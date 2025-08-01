#include<iostream>
using namespace std;

void func(){
     int size;
    cin>>size;

    int x = 1;
    int *arr = new int[size];

    for(int i = 0; i<size; i++){
        arr[i] = x;
        cout<<arr[i]<<" ";
        x++;
    }

    cout<<endl;

    delete [] arr;

}

int main(){
    // int size;
    // cin>>size;

    // int x = 1;
    // int *arr = new int[size];

    // for(int i = 0; i<size; i++){
    //     arr[i] = x;
    //     cout<<arr[i]<<" ";
    //     x++;
    // }

    // cout<<endl;

    func();

    return 0;
}
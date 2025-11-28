#include<iostream>
#include<vector>
using namespace std;

int lastOcc(vector<int>& arr, int key , int idx){
    if(idx == arr.size()) return -1;

    int i = lastOcc(arr,key,idx+1);
    if (i == -1 && arr[idx] == key){
        return idx;
    }

    return i;
}

int main(){
    vector<int> arr = {1,2,3,4,5,67,3,2,1,3,4,5};

    int key;
    cout<<"Enter the key to find last occurrence: ";
    cin>>key;

    int index = lastOcc(arr,key,0);
    if(index != -1){
        cout<<"Last occurrence of "<<key<<" is at index: "<<index<<endl;
    } else {
        cout<<key<<" not found in the array."<<endl;
    }
    return 0;

}
#include<iostream>
#include<vector>
using namespace std;

int firstOccurance(vector<int> arr, int target, int i){
    if(i == arr.size()){
        return -1;
    }

    if(arr[i] == target){
        return i;
    }

    return firstOccurance(arr, target, i+1);
    
}

// int firstOccurance(vector<int> arr, int target){
//     for(int i = 0; i<arr.size(); i++){
//         if(arr [i] == target){
//             return i;
//         }
//     }
//     return -1;
// }

int main(){
    vector <int> arr  = {1,2,3,3,4,5,6};
    int target = 3;

    cout<<firstOccurance(arr, target , 0);
}
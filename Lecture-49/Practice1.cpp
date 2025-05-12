#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void duplicates(vector<int> arr){
    vector<int> arr1 = {0};
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr1.size(); j++){
            if(arr[i] == arr1[j]){
               break;
            }
            else{
                arr1.push_back(arr[i]);
                break;
            }
        }
    }

    for(int i = 0; i<arr1.size(); i++){
        cout << arr1[i] << " ";
    }
}

int main(){
    vector<int> arr = {1,2,2,2,3,3,4,5,5,6,7,8,8};

    duplicates(arr);
}
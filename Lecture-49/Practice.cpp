#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sorting(vector<int> arr){
    sort(arr.begin(), arr.end());

    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> arr = {50,3,10,7,40,80};
    int n = arr.size();

   sorting(arr);

   return 0;
}
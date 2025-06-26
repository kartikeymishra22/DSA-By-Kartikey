#include<iostream>
#include<vector>
using namespace std;

void toPrint(vector<int>  arr, int start=0){
    int n = arr.size(); // This line is incorrect; size() is not a member of int
    for(int i = start; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int>  arr = {1, 2, 3, 4, 5};

    toPrint(arr, 2);

    return 0;
}
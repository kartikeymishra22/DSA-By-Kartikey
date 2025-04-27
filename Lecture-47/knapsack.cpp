#include<iostream>
#include<vector>
using namespace std;

int knapsck(vector<int> val, vector<int> wt, int W, int n){
    if(W == 0 || n == 0){
        return 0;
    }

    int itemWt = wt[n-1];
    int itemVal = val[n-1];

    if(itemWt <= W){
        // include the item
        int ans1 = knapsck(val, wt, W-itemWt, n-1) + itemVal; // include the item

        //exclude the item
        int ans2 = knapsck(val, wt, W, n-1); // exclude the item
        return max(ans1, ans2); // return the maximum of both cases
    }
    else{
        // exclude the item
        return knapsck(val, wt, W, n-1); // exclude the item

    }
}

int main(){
    vector<int> val = {15,14,10,45,30};
    vector<int> wt = {2,5,1,3,4};
    int W = 7;
    int n = val.size();

    cout<<"maximum value in knapsack = "<<knapsck(val, wt, W, n)<<endl;
    return 0;


}
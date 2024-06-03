#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target){
    int currSum = 0;
    vector<int> ans;
    for(int st = 0; st<arr.size(); st++){
        for(int end = arr.size()-1; end>st; end--){
            currSum = arr[st] + arr[end];
            if(currSum == target){
                ans.push_back(st);
                ans.push_back(end);
                return ans;
            }
        }
    }
    return ans;
}


int main(){
    vector<int> arr = {3,4,2,6};
    int target = 88;

    vector<int> ans = pairSum(arr, target);
    if (ans.size() == 2) { // Check if a valid pair was found
        cout << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found that sums to " << target << endl;
    }

    return 0;
}
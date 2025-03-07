#include<iostream>
#include<vector>
using namespace std;

void largestSubarray(vector<int> arr) {
    int maxLength = 0; // Store the maximum subarray length

    for (int i = 0; i < arr.size(); i++) {
        int sum = 0; // Reset sum for each starting index

        for (int j = i; j < arr.size(); j++) {
            sum += arr[j]; // Update sum
            
            if (sum == 0) {
                maxLength = max(maxLength, j - i + 1); // Update max length
            }
        }
    }

    cout << "Length of Largest Subarray with Sum 0: " << maxLength << endl;
}

int main(){
    vector<int> arr = {15,-2,2,-8,1,7,10};
    largestSubarray(arr);

    return 0;
}
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void unionOfArr(vector<int> nums1, vector<int> nums2){
    unordered_set<int> s;
    for(int i = 0; i<nums1.size(); i++){
        s.insert(nums1[i]);
    }
      for(int i = 0; i<nums2.size(); i++){
        s.insert(nums2[i]);
    }

    for(int it : s){
        cout<<it<<",";
    }
    cout<<endl;
}

void intersectionOfArr(vector<int> nums1, vector<int> nums2){
    
}

int main(){
    vector<int> nums1 = {7,3,9};
    vector<int> nums2 = {6,3,9,2,9,4};

    unionOfArr(nums1, nums2);

    return 0;

}
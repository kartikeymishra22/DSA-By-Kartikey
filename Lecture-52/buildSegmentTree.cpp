#include<iostream>
#include<vector>
using namespace std;

class SegmentTree{
    vector<int> tree;
    int n;

public:
    SegmentTree(vector<int> &arr){
        n = arr.size();
        tree.resize(4*n);
        builtTree(arr, 0, n-1, 0);
    }

    void builtTree(vector<int> &arr, int st, int end, int node){
        if(st == end){
            tree[node] = arr[st];
            return ;
        }

        int mid = st + (end - st) / 2;

        builtTree(arr, st, mid, 2*node + 1);
        builtTree(arr, mid + 1, end, 2*node + 2);

        tree[node] = tree[2*node + 1] + tree[2*node + 2];
    }

    void printTree(){
        for(int i = 0; i<tree.size(); i++){
            cout<<tree[i]<<" ";
        }
        cout<<endl;
    }

};


int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};

    SegmentTree st(arr);
    st.printTree();
}
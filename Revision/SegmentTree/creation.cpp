#include<iostream>
#include<vector>
using namespace std;

class SegmentTree{
    vector<int> tree;
    int n;

    void builtTree(vector<int> &arr, int st, int end, int node){
        if(st == end){
            tree[node] = arr[st];
            return;
        }

        int mid = st + (end -st)/ 2;

        builtTree(arr, st, mid, 2*node + 1);
        builtTree(arr, mid + 1, end, 2*node + 2);

        tree[node] = tree[2*node + 1] + tree[2*node + 2];
    }

    int rangeUtil(int qi, int qj, int si, int sj, int node){
        if(qj<si || sj < qi){
            return 0;
        }

        else if (sj<= qj && qi<= si){
            return tree[node];
        }
        else{
            int mid = si + (sj - si)/2;

            return rangeUtil(qi, qj, si, mid, 2*node + 1)
                  + rangeUtil(qi, qj, mid + 1, sj, 2* node + 2);
        }
    }


    public:
    SegmentTree(vector<int> &arr){
        n = arr.size();
        tree.resize(4*n);
        builtTree(arr, 0, n-1, 0);
    }

   
    void printTree(){
        for(int i = 0; i<tree.size(); i++){
            cout<<tree[i]<<" ";
        }
        cout<<endl;
    }
    
     int rangeSum(int qi, int qj){
       return rangeUtil(qi, qj, 0, n-1, 0);
    }

};

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};

    SegmentTree st(arr);
    st.printTree();

    cout<<st.rangeSum(2,5)<<endl;

    return 0;
}
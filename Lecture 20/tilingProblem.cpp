#include<iostream>
#include<string>
using namespace std;

int tilingProblem(int n){
    if(n==0 || n== 1){
        return 1;
    }

    // vertical
    int ans1 = tilingProblem(n -1);

    // horixontal

    int ans2 = tilingProblem(n -2);

    return ans1 + ans2;
}

int main(){
    int ways = tilingProblem(4);
    cout<<ways<<endl;
}
#include<iostream>
using namespace std;

int tilingProblem(int n ){
    if(n == 0 || n == 1){
        return 1;
    }

    int ans = tilingProblem(n-1) + tilingProblem(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the length of the board: ";
    cin>>n;

    cout<<"Number of ways to tile the board: "<<tilingProblem(n)<<endl;
    return 0;

}
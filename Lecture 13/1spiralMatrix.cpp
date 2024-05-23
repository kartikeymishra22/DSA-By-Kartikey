#include<iostream>
using namespace std;

void spiralMatrix(int arr[][4], int n ,int m){
    int srow = 0 , erow =n-1;
    int scol = 0, ecol = n-1;

    while(srow<=erow && scol<=ecol){
        // top
        for(int j=scol; j<=ecol; j++){
            cout<<arr[srow][j]<<" ";
        }

        // right
        for(int i=srow+1; i<=erow; i++){
            cout<<arr[i][ecol]<<" ";
        }

        // bottom
        for(int j=ecol-1; j>=scol; j--){
            if(srow == erow){
                break;
            }
            cout<<arr[erow][j]<<" ";
        }

        // left
        for(int i = erow - 1; i>=srow+ 1; i--){
            if(scol == ecol ){
                break;
            }
            cout<<arr[i][scol]<<" ";
        }
        srow++, erow--;
        scol++, ecol--;
    }
    cout<<endl;
}


int main(){
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    spiralMatrix(arr,4,4);
}
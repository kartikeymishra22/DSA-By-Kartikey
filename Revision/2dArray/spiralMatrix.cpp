#include<iostream>
using namespace std;

void spiralMatrix(int arr[][4], int n , int m){
    int srow = 0, erow = n-1;
    int scolumn = 0, ecolumn = m-1;

    while(srow<=erow && scolumn <= ecolumn){
        // top
        for(int i = scolumn; i<= ecolumn; i++){
            cout<<arr[srow][i]<<",";
        }

        // right
        for(int i = srow+1; i<=erow; i++){
            cout<<arr[i][ecolumn]<<",";
        }

        // bottom
        for(int i = ecolumn -1; i>=scolumn; i--){
            if(srow == erow){
                break;
            }
            cout<<arr[erow][i]<<",";
        }

        // left
        for(int i = erow -1; i>=srow+1; i--){
            if(scolumn == ecolumn){
                break;
            }
            cout<<arr[i][scolumn]<<",";
        }
        srow++, scolumn++;
        erow--, ecolumn--;
    }
    cout<<endl;
}

int main(){
    int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};

    spiralMatrix(arr,4,4);

    return 0;

}
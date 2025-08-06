#include<iostream>
using namespace std;

int main(){
    int arr[7] = {0,1,0,1,0,1,99};

    for(int i = 0; i<7; i++){
        if(arr[i] == 0){
            continue;
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i<7; i++){
        if(arr[i]== 99){
            break;
        }
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    return 0;
}
#include<iostream>
using namespace std;

void decresing(int n){
    if(n == 0)
        return;

    cout<<n<<",";
    decresing(n-1);
}

// void decreasing(int n){
//     for(int i=n;i>=1;i--){
//         cout<<i<<",";
//     }
//     cout<<endl;
// }

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    decresing(n);
}
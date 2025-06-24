#include<iostream>
#include<math.h>
using namespace std;

int binaryTodecimal(int n){
    int result = 0;
    if(n&1){
        for(int i = 0; i<n; i++){
            result += pow(2,i);
        }
        n = n<<1;
    }
}

int main(){
    int n;
    cout<<"Enter a binary number : ";
    cin>>n;

    cout<<"Decimal number is : "<<binaryTodecimal(n)<<endl;

    return 0;


}
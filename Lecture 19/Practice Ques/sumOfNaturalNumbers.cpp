#include<iostream>
using namespace std;

// By Recursion

int sumOfnaturalnumbers(int n){
    if(n == 0){
        return 0;
    }

    return n + sumOfnaturalnumbers(n-1);
}

// By LOOP

// int sumOfnaturalnumbers(int n ){
//     int sum = 0;
//     for(int i = 1; i<=n; i++){
//         sum  += i;
//     }

//     return sum;
// }

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"The sum of first "<<n<<" natural numbers is: "<<sumOfnaturalnumbers(n)<<endl;


}
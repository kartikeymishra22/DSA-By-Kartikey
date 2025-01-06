#include<iostream>
using namespace std;

int sumOfFibNumbers(int n){

    if(n==0)
    return 0;

    if(n==1)
    return 1;

    return sumOfFibNumbers(n-1) + sumOfFibNumbers(n-2);

}

// For sum of first N Fibonacci numbers,

// int sumOfFibNumbers(int n){
//    int a=0, b=1, sum=1, fib; 
//    if(n == 0) return 0; 
//    if(n == 1) return a;
//     for(int i=2; i<n; i++){
//          fib = a+b;
//          sum += fib;
//          a = b;
//          b = fib;
//     }   
//       return sum;
// }

// For Nth term of Fibonacci series, 

// int sumOfFibNumbers(int n){
//     int a=0,b=1,sum=0;
//     for(int i=1;i<n;i++){ 
//         sum = a+b; 
//         b = a;
//         a = sum;
//     }
//     return sum;
// }

int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    cout<<"The sum of first "<<n<<" Fibonacci numbers is: "<<sumOfFibNumbers(n)<<endl;

}

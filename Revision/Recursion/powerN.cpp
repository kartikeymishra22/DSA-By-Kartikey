#include<iostream>
using namespace std;

int powerN(int x, int n){
    int result = 1;

    for(int i = 0; i<n ; i++){
        result = result * x;
    }

    return result;
}

int pow(int x, int n){
    if(n == 0){
        return 1;
    }

    return x * pow(x, n-1);
}

int pow1(int x, int n){
    if(n == 0){
        return 1;
    }

    int halfPower = pow1(x, n/2);
    if(n % 2 == 0){
        return halfPower * halfPower;
    } else {
        return x * halfPower * halfPower;
    }
}

int pow2(int x , int n){
    int ans = 1;
    while(n>0){
        if(n &1){
            ans = ans * x;
        }

        x = x * x;
        n = n >> 1;
    }

    return ans;
}

int main(){
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    int n;
    cout << "Enter a non-negative integer exponent: ";
    cin >> n;

    // cout << x << " raised to the power of " << n << " is " << powerN(x, n) << endl;

    cout << x << " raised to the power of " << n << " is " << pow2(x, n) << endl;

    return 0;


}
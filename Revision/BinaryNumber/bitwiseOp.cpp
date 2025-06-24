#include<iostream>
using namespace std;


int main(){
    int n = 5;
    int m = 3;

    cout << "Bitwise AND: " << (n & m) << endl; // 1
    cout << "Bitwise OR: " << (n | m) << endl;  // 7
    cout << "Bitwise XOR: " << (n ^ m) << endl; // 6
    cout << "Bitwise NOT of n: " << (~n) << endl; // -6
    cout << "Bitwise NOT of m: " << (~m) << endl; // -4
    cout << "Left Shift n by 1: " << (n << 1) << endl; // 10
    cout << "Right Shift n by 1: " << (n >> 1) << endl; // 2
    cout << "Left Shift m by 1: " << (m << 1) << endl; // 6
    cout << "Right Shift m by 1: " << (m >> 1) << endl; // 1

    cout<<(63 & 22)<<endl;

    return 0;
}
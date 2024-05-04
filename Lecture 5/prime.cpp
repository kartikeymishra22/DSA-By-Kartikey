#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isPrime = true; // Initialize isPrime as true

    // Check for factors from 2 to n-1
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false; // If n is divisible by i, it's not prime
            break;
        }
    }

    if (isPrime ) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;  // To store sum of even numbers
    int sum1 = 0; // To store sum of odd numbers

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            sum = sum + i;
        } else {
            sum1 = sum1 + i; // Corrected this line to use sum1
        }
    }
    cout << sum << " " << sum1 << endl;

    return 0;
}
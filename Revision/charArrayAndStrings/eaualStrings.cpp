#include<iostream>
#include<string>
using namespace std;

bool areEqualStrings(string S1, string S2){
    if(S1.length() != S2.length()) {
        return false; // Strings of different lengths cannot be equal
    }

    int st = 0;
    int end = S1.length() - 1;

    swap(S1[0], S1[S1.length()-1]); // Swap first and last characters of S1

    return S1 == S2; // Check if the modified S1 is equal to S2

}

int main(){
    string S1 = "bank";
    string S2 = "kanb";

    if(areEqualStrings(S1, S2)) {
        cout << "Strings are equal after swapping first and last characters of S1." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}
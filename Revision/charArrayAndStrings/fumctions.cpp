#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[10];
    char ch1[10] = "Hello";

    strcpy(ch, ch1); // Copying string ch1 to ch
    cout << ch << endl;

    strcat(ch, ch1); // Concatenating ch1 to ch
    cout << ch << endl;

    cout << strlen(ch) << endl; // Length of string ch
}
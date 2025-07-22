#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello World!";

    string str1;
    cout << "Enter a string: ";
    getline(cin, str1);

    // cout << "You entered: " << str1 << endl;

    for( char ch : str1){
        cout << ch << " ";
    }
    cout<<endl;

}
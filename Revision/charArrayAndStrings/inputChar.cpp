#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char str[] = "Hello world!";

    // // cout<<"The length of the string is: "<<strlen(str)<<endl;

    // cout<<*str<<endl;
    // cout<<*(str+1)<<endl;
    // cout<<str<<endl;

    // // for(int i = 0; str[i]!= '\0'; i++){
    // //     cout<<str[i]<<" ";
    // // }
    // // cout << endl;
    // return 0;

    char str[50];
    cin.getline(str, 50);

    cout << "You entered: " << str << endl;

    for(int i = 0; i<strlen(str); i++){
        cout << str[i] << " ";
    }
    cout << endl;

    cout << "Length of the string: " << strlen(str) << endl;

    return 0;

}

#include<iostream>
using namespace std;

int main(){
    char ch[] = {'f','b','e','a','c','d'};
    int n = sizeof(ch)/ sizeof (char);

    for(int i = 0; i<n; i++){
        cout<<int(ch[i])<<",";
    }
    cout<<endl;

    return 0;
}
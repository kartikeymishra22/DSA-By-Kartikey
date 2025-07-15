#include<iostream>
#include<algorithm>
using namespace std;

void toPrint(char ch[], int n){
    for(int i = 0; i<n; i++){
        cout<<ch[i]<<",";
    }
    cout<<endl;
}

void builtSort(char ch[], int n){
    // sort(ch, ch + n);

    sort(ch, ch+n, greater<char>());

    toPrint(ch, n);
}

int main(){
    char ch[] = {'f','b','e','a','c','d'};
    int n = sizeof(ch)/ sizeof (char);

    builtSort(ch, n);
    return 0;
}
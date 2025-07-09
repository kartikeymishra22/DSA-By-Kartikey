#include<iostream>
using namespace std;

void toPrint(char ch[], int n){
    for(int i = 0; i<n ; i++){
        cout<<ch[i]<<",";
    }
    cout<<endl;
}

void insertionSort(char *ch, int n){
    for(int i = 1; i<n; i++){
        int curr = ch[i];
        int prev = i-1;

        while(prev >=0 && ch[prev] < curr){
            swap(ch[prev], ch[prev+1]);
            prev--;
        }
        prev = ch[curr];
    }

    toPrint(ch, n);
}

int main(){
    char ch[] = {'f','b','e','a','c','d'};
    int n = sizeof(ch)/ sizeof (char);

    insertionSort(ch, n);

    return 0;
}
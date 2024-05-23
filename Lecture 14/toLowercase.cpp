#include<iostream>
#include<cstring>
using namespace std;

void toLowercase(char word[], int n){
    for(int i= 0; i<n; i++){
        char ch =  word[i];
        if(ch>='a' && ch<='z'){
            break;
        }
        else{
            word[i]= ch - 'A' + 'a';
        }
    }
    cout<<word<<endl;
}

int main(){
    char word[] = "APPLE";

    toLowercase(word, strlen(word));
}

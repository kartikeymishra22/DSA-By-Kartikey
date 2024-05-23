#include<iostream>
#include<cstring>
using namespace std;

void reverseChar(char word[], int n){
    int start = 0;
    int end = n -1;

    while(start <= end){
        swap(word[start],word[end]);
        start++;
        end--;
    }
}

int main(){
    char word[] = "code";

    reverseChar(word, strlen(word));
    cout<<word<<endl;


}

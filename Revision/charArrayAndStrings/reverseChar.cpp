#include<iostream>
#include<cstring>
using namespace std;

void reverse(char str[]){
    int st = 0;
    int end = strlen(str) - 1;

    while(st < end){
        swap(str[st], str[end]);
        st++;
        end--;
    }

    cout << str << endl;
}

int main(){
    char str[] = "Hello World";

    reverse(str);

    return 0;

}
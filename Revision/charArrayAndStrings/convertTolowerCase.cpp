#include<iostream>
using namespace std;

void convertToLowerCase(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >='A' && str[i]<= 'Z'){
            str[i] = str[i] - 'A' + 'a';
        }
    }
    cout << str << endl;
}

void convertToLowerCase1(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >='A' && str[i]<= 'Z'){
            str[i] = tolower(str[i])    ;
        }
    }
    cout << str << endl;
}

int main(){
    char str[] = "JSDFHSGHDGJWDGHDFGHWDFGWDUH";

    convertToLowerCase1(str);
    return 0;


}
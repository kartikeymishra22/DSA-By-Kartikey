#include<iostream>
#include<string>
using namespace std;

void countLowerCaseVowels(string str){
    int count = 0;
    for(int i = 0; i<str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] =='i' || str[i] =='o' || str[i] == 'u'){
            count++;
        }
    }

    cout<<"Number of vowels present -> "<<count<<endl;
}

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin , str);

    countLowerCaseVowels(str);

    return 0;

}
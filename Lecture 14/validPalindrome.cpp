#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char word[], int n){

    int start = 0;
    int end = n -1;

    while(start <end){
        if(word[start] != word[end]){
            cout<<"NOt a Palindrome"<<endl;
            return false;
        }
        start++;
        end--;
    }
    cout<<"Palindrome"<<endl;
    return true;
}

int main(){
    char word[] = "racecar";

    isPalindrome(word, strlen(word));


}

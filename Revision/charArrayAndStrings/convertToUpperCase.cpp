#include<iostream>
using namespace std;

// void convertToUpperCase(char *word){
//     for(int i =  0; word[i] != '\0'; i++){
//         if(word[i] >= 'a' && word[i] <= 'z'){
//             word[i] = word[i] - 'a' + 'A';
//         }
//     }
//     cout<<endl;
//     cout << "Converted to uppercase: " << word << endl;
// }

void convertToUpperCase1(char *word){
    for(int i =  0; word[i] != '\0'; i++){
        word[i] = toupper(word[i]);
    }
    cout << endl;
    cout << "Converted to uppercase: " << word << endl;
}

int main(){
    char word[] = "apple";

    cout << "Original word: " << word << endl;
    convertToUpperCase1(word);

    return 0;
}
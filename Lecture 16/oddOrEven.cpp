#include<iostream>
using namespace std;

void oddOreven(int num){

    if((num & 1) == 0){
        cout<<"Even"<<endl;
    } else {
        cout<<"Odd"<<endl;
    }
}

int main(){

    oddOreven(45);

    return 0;

}
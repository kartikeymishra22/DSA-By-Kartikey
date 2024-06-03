#include<iostream>
using namespace std;

void oddOreven(int n){
    if((n&1) == 0){
        cout<<"Even Number"<<endl;
    } else{
        cout<<"Odd Number"<<endl;
    }
}

int main(){

    oddOreven(5);

}
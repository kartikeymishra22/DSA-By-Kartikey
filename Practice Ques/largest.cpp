#include<iostream>
using namespace std;

int main(){
    int a = 22;
    int b = 55;
    int c = 33;

    if(a>b && a>c){
        cout<<a<<endl;
    }
    else if (b>c && b>a){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }

}
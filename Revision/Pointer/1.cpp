#include<iostream>
using namespace std;

int main(){
    int a = 5;

    int *ptr = &a;
    int **ptr1 = &ptr;

    cout<<*ptr<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;

    cout<<**ptr1<<endl;
    cout<<ptr1<<endl;
    cout<<&ptr1<<endl;


}
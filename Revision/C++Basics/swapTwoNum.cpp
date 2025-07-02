#include<iostream>
using namespace std;

int swap(int a, int b){
    int temp ;
    temp = a ;
    a = b ;
    b = temp ;

    cout<<"a is -> "<<a<<endl;
    cout<<"b is -> "<<b<<endl;

}

int main(){
    int a;
    cout<<"Enter the first number: ";
    cin>>a;

    int b;
    cout<<"Enter the second number: ";
    cin>>b;

    swap(a,b);

    return 0;


}

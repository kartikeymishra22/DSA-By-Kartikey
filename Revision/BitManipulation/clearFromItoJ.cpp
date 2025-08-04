#include<iostream>
using namespace std;

int clearFromItoJ(int num, int i, int j){
    int a = (~0) <<(j+1);
    int b = (1 << (i)) - 1;

    int mask = a |b;

    return num & mask;
}

int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    int i;
    cout<<"Enter the i : ";
    cin>>i;

    int j;
    cout<<"Enter the j : ";
    cin>>j;

   cout<<"the return number is -> "<<clearFromItoJ(num, i, j)<<endl;;
   return 0;

}
#include<iostream>
using namespace std;

bool powerOf2(int num){
    if((num & (num - 1))==0){
        return true;
    }
    else{ 
        return false;
    }
}
int main(){

cout<<powerOf2(8)<<endl;  


}
#include<iostream>
#include<string>
using namespace std;

class A{
    string secret = "I am a secret";
    friend class B;
};

class B{
    public:
    void revealSecret(A &obj1){
        cout<<obj1.secret<<endl;
    }
    
};

int main(){
    A obj1;
    B obj2;
    obj2.revealSecret(obj1);
    return 0;
}
#include<iostream>
#include<string>
using namespace std; 

class User {
    int id;
    string password;

    public:
    string userName;

    User(int id){
        cout<<"Constructor called"<<endl;
        this->id = id;
    }

    void setPassword(string password){
        this->password = password;
    }
    
    string getPassword(){
        return password;
    }
};

int main(){

    User u1(123);
    cout<<u1.userName<<endl;
    u1.setPassword("abcd1234");
    cout<<u1.getPassword()<<endl;

    return 0;
}
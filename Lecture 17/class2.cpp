#include<iostream>
#include<string>
using namespace std;

class User {
    private:
    int id;
    string password;

    public:
    string username;

    User(int id){
        this->id = id;
    }

    void setPassword(string pass){
        this->password = pass;
    }

    string getPassword(){
        return password; 
    }

};

int main(){

}

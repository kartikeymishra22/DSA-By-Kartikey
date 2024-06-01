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

void setPassword(string password){
    this->password = password;
}

string getPassword(){
    return password;
}

};

int main(){

    User c1(101);
    c1.username = "abcddd";
    c1.setPassword("<PASSWORD>");

    cout<<"username : "<<c1.username<<endl;
    cout<<"Pasword : "<<c1.getPassword()<<endl;


}
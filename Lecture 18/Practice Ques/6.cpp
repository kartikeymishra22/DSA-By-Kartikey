#include<iostream>
using namespace std;

class BankAccount{
    private:
    int accountNumer;
    double balance;

    public:
    BankAccount(int no, int balance){
        this->accountNumer = no;
        this->balance = balance;
    }

    void deposit(double amount){
        balance = balance + amount;
        cout<<balance<<endl;
    }

    void withdraw(double amount){
        if(amount<=balance){
            balance = balance - amount;
            cout<<balance<<endl;
        }else{
            cout<<"Not sufficient balance"<<endl;
        }
    }

    double getBalance(){
        return balance;
    }



};

int main(){
    BankAccount Joseph(1234, 500.0);
    Joseph.deposit(1000);
    Joseph.withdraw(500);
    cout<<Joseph.getBalance()<<endl;

}
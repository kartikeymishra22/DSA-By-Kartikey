#include<iostream>
using namespace std;

class BankAccount{
    int accountNumber;
    int balance;

    public:
    BankAccount(int accountNumber, int balance){
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void setDeposit(int amount){
        this->balance += amount;
    }

    void withdraw(int amount){
        if(this->balance < amount){
            cout<<"Insufficient Balance"<<endl;
        }
        this->balance -= amount;
    }

    double getBalance(){
        return this->balance;
    }

};

int main(){
    BankAccount b1(101, 5000);
    b1.getBalance();
    return 0;
}
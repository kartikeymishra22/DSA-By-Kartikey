#include<iostream>
using namespace std;

class BankAccount{
    private:
    int accountNumber;
    double bankBalance;

    public:

    BankAccount(int accNum, double bal){
        accountNumber = accNum;
        bankBalance = bal;
    }

    void deposit(double amount){
        bankBalance += amount;
    }

    void withdraw(double amount){
        if(amount <= bankBalance){
            bankBalance -= amount;
        }
        else{
            cout<<"Not sufficient balance"<<endl;
        }
    }

    double getbankBalance(){
        return bankBalance;
    }
};

int main(){

    BankAccount Kartikey(12345, 500.00);
    Kartikey.deposit(150.00);
    Kartikey.withdraw(100.00);

    cout<<"Balence is : "<<Kartikey.getbankBalance()<<endl;

}

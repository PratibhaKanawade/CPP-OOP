#include<iostream>
using namespace std;

class bankaccount{
    private:
    int accountnumber;
    double balance;

    public:

    //constructor
    bankaccount( double initialbalance){

        if(initialbalance>=0){
             balance=initialbalance;
        }
        else{
            balance=0;
        }
    }

    void deposit(double amount){

        if(amount>0){
           balance += amount;
           cout << "Deposit successful." << endl;
        }
        else
        {
            cout << "Invalid Deposit amount." << endl;
        }
    }

    void withdraw(double amount){

        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    int getbalance(){
        return balance;
    }
};

int main(){

bankaccount account(5000);

cout << "Initial Balance: " << account.getbalance() << endl;

    account.deposit(2000);

    cout << "Balance after deposit: "
         << account.getbalance() << endl;

    account.withdraw(1000);

    cout << "Balance after withdrawal: "
         << account.getbalance() << endl;

    account.withdraw(10000);

    cout << "Final Balance: "
         << account.getbalance() << endl;
return 0;
}
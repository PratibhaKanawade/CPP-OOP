#include<iostream>
using namespace std;

class bankaccount{
private:
 int balance;

public:
 bankaccount(int b){
  balance=b;
 }

 friend  class bankmanager;
};

class bankmanager{
    public:
 
    void displaybalance(bankaccount account){
        cout<<"balance is:"<<account .balance;
    }
};

int main(){
    bankaccount account(50000);

    bankmanager manager;

    manager.displaybalance(account);

    return 0;
}

#include<iostream>
using namespace std;

class bankaccount{
    private:
    int balance;

    public:

    void setbalance(int b){
        balance=b;
    }

    int getbalance(){
        return balance;
    }
};

int main(){
    bankaccount account;

    account.setbalance(5000);

    cout<<"balance is:"<<account.getbalance();

    return 0;
}
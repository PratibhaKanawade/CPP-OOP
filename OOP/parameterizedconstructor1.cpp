#include<iostream>
using namespace std;
 
class BankAccount{
    public:
     string accountHolder;
    int accountNumber;
    int balance;
    
   //parameterized constructor
    BankAccount(string accountHolder, int accountNumber,int balance){
        this->accountHolder = accountHolder;
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void display(){
        cout<<"accountHolder is:"<<accountHolder<<endl;
        cout<<"accountNumber is:"<<accountNumber<<endl;
        cout<<"balance is:"<<balance<<endl;
    }
    
};

int main(){
    BankAccount a1("Pratibha",22,1000);
    BankAccount a2("Pallavi",30,2000);

    a1.display();
    cout<<endl;
    a2.display();

    return 0;
}
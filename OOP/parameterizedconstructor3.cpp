#include<iostream>
using namespace std;

 class BankAccount{
    public:
   string accountHolder;
   int balance;
  
   //parameterized constructor
   BankAccount(string accountHolder,int balance){
    this->accountHolder=accountHolder;
    this->balance=balance;

    if(this->balance<0){
        this->balance=0;
    }
   }

   void display(){
    cout<<"name of accountHolder is:"<<accountHolder<<endl;
    cout<<"balance is:"<<balance<<endl;
   }

 };

 int main(){

    BankAccount a1("pratibha",-500);

    a1.display();

 }
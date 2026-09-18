#include<iostream>
using namespace std;
 class person {
    public:
    virtual void display(){
        cout<<"i am a person"<<endl;
    }
 };

 class student:public person{
    public:
    void display() override{
        cout<<"i am a student"<<endl;
    }
 };

 int main(){
     person*p;

     student s;
     
     p=&s;

     p->display();

     return 0;
 }
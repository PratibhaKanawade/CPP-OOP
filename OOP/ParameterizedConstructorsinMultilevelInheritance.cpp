#include<iostream>
using namespace std;

class person{
    public:
    string name;

    person(string n){
        name=n;
        cout<<"person constructor"<<endl;
    }
};

class employee:public person{
    public:
    int employeeID;

    employee(string n,int id):person(n){
        employeeID=id;
        cout<<"employee constructor"<<endl;
    }
};

class manager:public employee{
    public:
    string department;
    manager(string n,int id,string d):employee(n,id){
        department=d;
        cout<<"manager constructor"<<endl;
    }

    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"employeeID:"<<employeeID<<endl;
        cout<<"department:"<<department<<endl;
    }
};

int main(){
    manager m("Pratibha",123,"ENTC");

    m.display();

    return 0;
}
#include<iostream>
using namespace std;

class person{
    public:
    string name;
    
    person(string n){
        name=n;
        cout<<"person constructor called"<<endl;
    }
};

class employee{
    public:
    int employeeID;

    employee(int id){
        employeeID=id;
        cout<<"employee constructor called"<<endl;
    }
};

class manager:public person , public employee{
    public:
    string department;

    manager(string n,int id,string d):person(n),employee(id){
        department=d;
        cout<<"manager constructor called"<<endl;
    }
};


int main(){

    manager m("Pratibha",3232,"ENTC");

    cout<<"name:"<<m.name<<endl;
    cout<<"employeeID:"<<m.employeeID<<endl;
    cout<<"department:"<<m.department<<endl;

    return 0;
}


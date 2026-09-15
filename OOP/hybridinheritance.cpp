#include<iostream>
using namespace std;

//parent/base class
class person{
    public:
    string name="Pratibha";
    void displayperson(){
    cout<<"person name is:"<<name<<endl;
    }
};

//derived class 1
class employee:public person{
    public:
    int employeeID=3232;
    void displayemployee(){
        cout<<"employeeID is:"<<employeeID<<endl;
    }
};

//derived class 2
class student:public person{
    public:
    int rollno=36;
    void displaystudent(){
        cout<<"student rollno is:"<<rollno<<endl;
    }
};

//derived from employee
class manager:public employee{
    public:
    string department="ENTC";
    void displaymanager(){
        cout<<"manager department is:"<<department<<endl;
    }
};

int main(){

    //manager object
    manager m;

    cout<<"manager details:"<<endl;

    m.displayperson();
    m.displayemployee();
    m.displaymanager();

    cout<<endl;

    //student object
    student s;

    cout<<"student details:"<<endl;

    s.displayperson();
    s.displaystudent();

return 0;
}
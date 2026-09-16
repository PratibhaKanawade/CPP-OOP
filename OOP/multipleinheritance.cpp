#include<iostream>
using namespace std;

class person{
    public:
    string name="Pratibha";
    void displayName(){
        cout<<"name is:"<<name<<endl;
    }
};

class employee{
    public:
    int employeeID=3232;
    void displayEmployeeID(){
        cout<<"Employee ID is:"<<employeeID<<endl;
    }
};

class manager:public person,public employee{
    public:
    string department="ENTC";
    void displayDepartment(){
        cout<<"department is:"<<department<<endl;
    }
};

int main(){
    manager m;

    m.displayName();
    m.displayEmployeeID();
    m.displayDepartment();

    return 0;
}
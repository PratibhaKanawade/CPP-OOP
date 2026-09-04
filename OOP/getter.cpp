#include<iostream>
using namespace std;

class employee{
private:
string name;
int salary;

public:

employee(string n,int s){
    name=n;
    salary=s;
}

string getName(){
    return name;
}

int getSalary(){
    return salary;
}
};

int main(){

    employee e1("pratibha",50000);

    cout<<"name is:"<<e1.getName()<<endl;
    cout<<"salary is:"<<e1.getSalary();

    return 0;
}
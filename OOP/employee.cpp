#include<iostream>
using namespace std;

class employee{  //class creation
    public:      //access specifier

    string name;
    string id;
    int salary;

    void detail(){
        cout<<name<<" "<<"is name of employee"<<endl;
        cout<<id<<" "<<"is id of employee"<<endl;
        cout<<salary<<" "<<"is salary of employee"<<endl;
    }
};

int main(){

    employee e1; //object creation

    e1.name="pratibha";  //accessing data members
    e1.id="pk@123";     //accessing data members
    e1.salary=50000;    //accessing data members

    e1.detail(); //accessing member functions

    return 0;
}

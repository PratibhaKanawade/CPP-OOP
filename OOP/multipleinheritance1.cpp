#include<iostream>
using namespace std;

class person{
    public:
    void display(){
        cout<<"person details"<<endl;
    }
};

class student{
    public:
    void display(){
        cout<<"student details"<<endl;
    }
};

class teacher:public person, public student{

};

int main(){

    teacher t;

    //both base classes have a function with the same name.
    //only t.display();  give an error
    //Use the scope resolution operator ::

    t.person::display();
    t.student::display();

    return 0;
}
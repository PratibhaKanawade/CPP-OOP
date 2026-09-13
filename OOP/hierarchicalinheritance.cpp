#include<iostream>
using namespace std;

//parent class
class person{
    public:
    string name=" Pratibha";
    void displayperson(){
        cout<<"person name is:"<<name<<endl;
    }
};
 //class 1
class student:public person{
    public:
    int rollno =21;
    void displaystudent(){
        cout<<"student rollno is:"<<rollno<<endl;
    }
};

//class 2
class teacher:public person{
    public:
    string subject="C++";
    void displayteacher(){
        cout<<"teacher subject is:"<<subject<<endl;
    }
};

int main(){
    student s;
    cout<<"Display student details:"<<endl;
    s.displayperson();
    s.displaystudent();

    cout<<endl;

    teacher t;
    cout<<"Display teacher details:"<<endl;
    t.displayperson();
    t.displayteacher();

    return 0;
}
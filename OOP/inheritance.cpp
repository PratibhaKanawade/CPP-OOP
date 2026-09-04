#include<iostream>
using namespace std;

class person{
    public:
    string name;

    void displayname(){
        cout<<"name is:"<<name<<endl;
    }
};

class student:public person{
    public:
    int rollno;

    void displayrollno(){
        cout<<"rollno is:"<<rollno<<endl;
    }
};

int main(){

    student s1;

    s1.name="Pratibha";
    s1.rollno=36;

    s1.displayname();
    s1.displayrollno();

    return 0;
}
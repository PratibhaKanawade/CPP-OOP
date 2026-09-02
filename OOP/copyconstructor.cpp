#include<iostream>
using namespace std;

class student {
    public:

    string name;
    int age;
    int marks;

    student(string n,int a,int m){
        name=n;
        age=a;
        marks=m;
    }

    student(const student &s){
        name= s.name;
        age=s.age;
        marks=s.marks;
    }

    void display(){
        cout<<"name is:"<<name<<endl;
        cout<<"age is:"<<age<<endl;
        cout<<"marks is:"<<marks<<endl;
    }
};

int main(){
     student s1("Pratibha",21,90);

     student s2=s1;

     cout<<"student s1:"<<endl;
     s1.display();

     cout<<endl;

     cout<<"student s2:"<<endl;
     s2.display();

     return 0;
}
#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;

    //constructor 1
    student(){
        name="Default";
        age=0;
    }

    //constructor 2
    student(string n){
    name=n;
    age=0;
    }

    //constructor 3
    student (string n,int a){
        name=n;
        age=a;
    }

    void display(){
        cout<<"name is:"<<name<<endl;
        cout<<"age is:"<<age<<endl;
    }
};

int main(){
    student s1;
    student s2("Pratibha");
    student s3("kanawade",21);

    cout<<"student 1:"<<endl;
    s1.display();

    cout<<endl;

    cout<<"student 2:"<<endl;
    s2.display();

    cout<<endl;

    cout<<"student 3:"<<endl;
    s3.display();

return 0;
}
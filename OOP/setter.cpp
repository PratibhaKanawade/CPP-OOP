#include<iostream>
using namespace std;

class student{
private:
string name;
int age;

public:

student(string n,int s){
    name=n;
    age=s;
}

void setname(string n){
 name=n;
}

void setage(int a){
    age=a;
}

string getname(){
    return name;
}

int getage(){
    return age;
}
};

int main(){

    student s1("pratibha",21);

    cout<<" original name is:"<<s1.getname()<<endl;
    cout<<" original age is:"<<s1.getage()<<endl;

    s1.setname("Raj");
    s1.setage(20);

    cout<<endl;
    
    cout<<" updated name is:"<<s1.getname()<<endl;
    cout<<" updated age is:"<<s1.getage()<<endl;




    return 0;
}
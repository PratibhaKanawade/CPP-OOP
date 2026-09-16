#include<iostream>
using namespace std;

class person{
    public:
    string name;
    person(string n){
        name=n;
        cout<<"person constructor"<<endl;
    }
};

class employee:public person{
    public:
    int salary;
    employee(string n,int s):person(n){
      salary=s;
      cout<<"employee constructor"<<endl;
    }

void display(){
    cout<<"name is:"<<name<<endl;
    cout<<"salary is:"<<salary<<endl;
}

};

int main(){
employee e("Pratibha",5000);

e. display();

return 0;
}
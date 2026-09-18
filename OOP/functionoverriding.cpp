#include<iostream>
using namespace std;

class person{
    public:
    void display(){
        cout<<"i am a person"<<endl;
    }
};

class student:public person{
public:
void display(){
    cout<<"i am a student"<<endl;
}
};

int main(){
    student s;
    s.display();  //display() is present in both but When we call the Student version is called.
}
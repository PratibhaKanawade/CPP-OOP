#include<iostream>
using namespace std;

class person{
    public:
    virtual void display(){
        cout<<" i am a person "<<endl;
    }
};

class student :public person {
    public:
      void display(){       //here i am giving virtual here then my output is i am a person 
        cout<<"i am a student "<<endl;
    }
}; 

int main(){

     person*p;  //p is a base-class pointer

      student s;

       p = &s;  //p points to a Student object.

        p->display();  //Because display() is virtual, C++ calls the Student version at runtime.

 return 0;

}
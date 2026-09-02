#include<iostream>
using namespace std;

class student{
    public:

    string name;
    int age;
    int rollno;

   void access(){
    cout<<"name of student:"<<name<<endl;
   }

};

int main(){

    student s1;
    s1.name="pratibha";
    s1.age=21;
    s1.rollno=36;

  s1.access();

  return 0;
}
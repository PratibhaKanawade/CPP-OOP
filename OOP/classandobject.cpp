#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int marks;
};

int main(){

student s1;
s1.name="pratibha";
s1.age=20;
s1.marks=90;

cout<<"student name is:"<<s1.name<<endl;
cout<<"student age is:"<<s1.age<<endl;
cout<<"student marks is:"<<s1.marks<<endl;

return 0;
}
#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;

    //constructor
    student(){

    name="Pratibha";
    age=21;
    }
};

int main() {
    student s1;

    cout<<"name of student is:"<<s1.name<<endl;
    cout<<"age of student is:"<<s1.age<<endl;
    
return 0;

}
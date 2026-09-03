#include<iostream>
using namespace std;

class student{
    public:

    string name;
    static string college;   //use of static keyword

    student(string n){
        name=n;
    }

    void display(){
        cout<<" name is:"<<name<<endl;
        cout<<" college is:"<<college<<endl;
    }
};
  
string student::college="JSPM RSCOE";

int main(){
    student s1("Pratibha");
    student s2("Raj");

    s1.display();

    cout<<endl;

    s2.display();

    return 0;
}
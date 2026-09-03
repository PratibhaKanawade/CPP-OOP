#include<iostream>
using namespace std;

class student{
    private:
    int marks;

    public:
    student(int m){
        marks=m;
    }

    friend void displaymarks(student s);
};

void displaymarks(student s){
    cout<<"marks is:"<<s.marks<<endl;
}

int main(){
     student s1(90);

     displaymarks(s1);

     return 0;
}
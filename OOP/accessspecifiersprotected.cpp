#include<iostream>
using namespace std;

class student 
{
    protected:
    int marks;
};

class result:public student
{
    public:
     void setMarks(){
        marks=90;
    }

    void displayMarks(){
        cout<<"marks is:"<<marks<<endl;
    }
};

int main(){
    result r1;

    //r1.marks=90;   //not allowed from outside

    r1.setMarks();    //access through public function
    r1.displayMarks(); //access through public function

    return 0;
}
#include<iostream>
using namespace std;

class student{
    private:
    int marks;

    public:
    void setMarks(int m){
        marks=m;
    }

    void displayMarks(){
        cout<<"marks is:"<<marks<<endl;
    }
};

int main(){
    student s1;
    //s1.marks=90;    //error making it private

    s1.setMarks(90);  //access through public function
    s1.displayMarks(); //access through public function

    return 0;
}
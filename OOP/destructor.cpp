#include<iostream>
using namespace std;

class student{
    public:

    student(){
        cout<<"constructor called"<<endl;
    }

    ~student(){
        cout<<"destructor called"<<endl;
    }
};

int main(){

    student s1;

    cout<<"inside main()"<<endl;

    return 0;
}
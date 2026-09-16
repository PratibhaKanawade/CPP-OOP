#include<iostream>
using namespace std;

class person{
    public:
    person(){
        cout<<"person constructor"<<endl;
    }
};

class employee:public person{
    public:
    employee(){
        cout<<"employee constructor"<<endl;
    }
};

int main (){
 employee e;

 return 0;
}
#include<iostream>
using namespace std;

class calculator{
    public:

    int add(int a,int b){
        return a+b;
    }

    int add (int a,int b,int c){
        return a+b+c;
    }

    int add(double a,double b){
        return a+b;
    }
};

int main(){

    calculator c;

    cout<<"two integers:"<<c. add(2,3)<<endl;

   cout<<"three integers:"<<c.add(1,2,3)<<endl;

   cout<<"two double values:"<<c.add(2.0,5.0)<<endl;
   
   return 0;
}
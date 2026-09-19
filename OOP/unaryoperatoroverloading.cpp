#include<iostream>
using namespace std;

class number{
    private:
     int value;

     public:
     number(int v){
        value=v;
     }

     void operator++(){
        ++value;
     }
     void display(){
        cout<<"value:"<<value<<endl;
     }
}; 

int main(){

    number n(10);

    ++n;

    n.display();

    return 0;
}
#include<iostream>
using namespace std;

class circle{
    public:
     double radius;

     //parameterized constructor
     circle(int r){
        radius=r;
     }

     void Area(){
        cout<<"Area is:"<<3.14*radius*radius<<endl;
     }

     void Circumference(){
        cout<<"Circumference is:"<<2*3.14*radius<<endl;
     }
};

int main(){

    circle c1(1);

    c1.Area();
    c1.Circumference();

    return 0;
}
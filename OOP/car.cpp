#include<iostream>
using namespace std;

class car{
    public:
    string name;
    string color;

    void drive(){
        cout<<name<<" "<<"is driving"<<endl;
    }

    void speed(){
        cout<<name<<" "<<"is running fast"<<endl;
    }
};

int main(){

    car car1; //object 1
    
    car1.name="tesla";
    car1.color="black";

    car1.drive();
    car1.speed();

    car car2; //object 2

    car2.name="rolls royce";
    car2.color="white";

    car2.drive();
    car2.speed();

    return 0;

}
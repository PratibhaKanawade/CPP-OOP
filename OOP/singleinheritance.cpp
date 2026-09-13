#include<iostream>
using namespace std;

//parent class
class vehicle{
public:
string color;
void displayvehicle(){
    cout<<"color of vehicle is:"<<color<<endl;
}
};

//car class
class car:public vehicle{
    public:
    string brand;
    void displaycar(){
    cout<<"brand of car is:"<<brand<<endl;
    }
};

//main function
int main(){

    car c1;

    c1.color="White";
    c1.brand="Mahindra";

    //access parent class method
    c1.displayvehicle();

    //access child class method
    c1.displaycar();

    return 0;
}



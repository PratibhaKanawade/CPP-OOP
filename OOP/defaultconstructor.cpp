#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    int speed;

    // default constructor
    car(){

    brand="unknown";
    speed=0;
    }
};

int main() {
    car c1;

    cout<<"brand of car is:"<<c1.brand<<endl;
    cout<<"speed of car is:"<<c1.speed<<endl;
    
return 0;

}
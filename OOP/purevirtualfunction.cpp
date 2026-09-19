#include<iostream>
using namespace std;

class animal{
    public:
    virtual void sound() = 0;
};

class dog:public animal{
    public:
    void sound() override{
        cout<<"dog barks";
    }
};

int main(){

    dog d;

    d.sound();

    return 0;
}
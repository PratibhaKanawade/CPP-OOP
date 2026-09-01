#include<iostream>
using namespace std;
 
class animal{
    public:

    string name;
    int weight;

    animal(string n,int w){
        name=n;
        weight=w;
    }

    void display(){
    cout<<"name of animal is:"<<name<<endl;
    cout<<"weight of animal is:"<<weight<<endl;
    }
};

int main(){
    animal a1("Tiger",10);

    a1.display();
}
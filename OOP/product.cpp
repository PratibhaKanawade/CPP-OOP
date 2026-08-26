#include<iostream>
using namespace std;

class product{    //class creation
    public:

    string name;
    int price;
    int quantity;

     void totalprice(){
     cout<<"total price of product is:"<<price*quantity<<endl;
    }
};

int main(){

    product p1;   //object creation

    p1.name="nirma";  //accesing data members
    p1.price=20;      //accesing data members
    p1.quantity=2;    //accesing data members

    p1.totalprice(); //accessing member function


}
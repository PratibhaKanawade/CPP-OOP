#include<iostream>
using namespace std;

   //grandparent class
    class person{
    public:
    string name="Pratibha";
    void displayperson(){
        cout<<" Person name is:"<<name<<endl;
    }
    };
    
    //parent class
    class employee:public person{
        public:
        int employeeID =362006;
        void displayemployee(){
            cout<<" Employee ID is:"<<employeeID<<endl;
        }
    };

    //child class
    class manager:public employee{
        public:
        string department="ENTC";
        void displaymanager(){
            cout<<"Manager department is:"<<department<<endl;
        }
    };

    int main(){
        manager m1;

        m1.displayperson();
        m1.displayemployee();
        m1.displaymanager();

        return 0;
    }



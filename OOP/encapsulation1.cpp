#include<iostream>
using namespace std;

class employee{
    private:
    int salary;

    public:

    void setsalary(int s){
        salary=s;

        if(salary<=0){
            salary=0;
        }
    }

    int getsalary(){
        return salary;
    }
};

int main(){

    employee e1;

    e1.setsalary(-500);

    cout<<"salary of employee is:"<<e1.getsalary();
}

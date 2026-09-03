#include<iostream>
using namespace std;

class student{
    public:

    static string college;
    
    static void displaycollege(){
        cout<<"college is:"<<college<<endl;
    }
};

string student :: college="JSPM RSCOE";

int main(){
    student::displaycollege();

    return 0;
}
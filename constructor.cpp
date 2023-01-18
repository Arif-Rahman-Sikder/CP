//constructor name and class name are same
//constructor has no return type
//parameters can be used on other class memeber
//cannot do inheritance
//constructor needs to be declared publicly or else it wont work
#include<iostream>
using namespace std;
class constructorDemo{
    public:
    constructorDemo(){ //this is a default constructor without parameters
    //parameter constructor are like constructorDemo(int a,int b)
        cout<<"this is from a constructor";
    }

};

int main(){
    constructorDemo obj;

    return 0;
}
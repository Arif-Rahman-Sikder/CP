/*a destructor is automatically called when 
1.the programme finishes execution 
2.when a scope (the {} parenthesis)containing local variable ends.*/



#include<iostream>
using namespace std;
class helloworld{
    public:
    //constructor
    helloworld(){
        cout<<"constructor is called"<<endl;

    }
    //descructor
    ~helloworld(){
        cout<<"destructor is called"<<endl;
    }
    //member function
    void display(){  //void is return type
    cout<<"hello world from member function"<<endl;


    }
};

int main(){

    helloworld obj; //object created
    obj.display();
    return 0;
}
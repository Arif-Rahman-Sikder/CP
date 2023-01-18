//polimorphism part 2--(function overriding)
// we can also say runtime polimorphism 
//function is same as parent and child
//we will kow rhat the function will call from parent or child class after running the programme
//hence it is known as runtime polimorphism
#include<iostream>
using namespace std;


    class a{
public :
void display (){
    cout<<"this is super/parentclass function"<<endl;
}
    };
     class b:public a{
public :
void display (){
    cout<<"this is baseclass function"<<endl;
}
     };
int main(){

a obj;
obj.display();
b obj2;
obj2.display();


    return 0;
    
}
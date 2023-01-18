//polimorphism part1(function overloading)

/*polimorphism is a feature of OOPs that allowss the object 
to behave differently in different in different conditions 
1.compile time polimorphism -this is also known as static or early binding
*/

#include<iostream>
using namespace std;
class add{
    public:
    int sum(int num1,int num2){
        return num1+num2;
    }
    int sum (int num1,int num2,int num3){
        return num1+num2;
    }
};

int main(){
    add obj;
    cout<<"output:"<<obj.sum(10,20)<<endl;//output depends on the number of parameters
    cout<<"output:"<<obj.sum(10,20,30)<<endl;
    return 0;
}
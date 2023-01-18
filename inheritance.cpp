//inheritance in OOP
//saves time and increase efficiency

#include<iostream>
using namespace std;
class teacher{
    public:
    teacher(){
        cout<<"hey i am a teacher"<<endl;

    }
    string collegename="youtube college";
};
class mathteacher: public teacher{
    public:
    mathteacher(){
        cout<<"I am a math teacher"<<endl;

    }
};
int main(){

    mathteacher obj;
    cout<<"college name is:"<<obj.collegename<<endl;
    return 0;
}
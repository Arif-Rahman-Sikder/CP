//fried class and function
#include<iostream>
using namespace std;
class xyz{
    private:
    char ch='a';
    int num=11;
    public:
    friend class abc;
};
//global function
class abc{
    public:
    void disp(xyz obj){
cout<<obj.ch<<endl;
cout<<obj.num<<endl;
    }
};

int main(){
    abc obj;
    xyz obj2;
    obj.disp(obj2);
    
    return 0;
}


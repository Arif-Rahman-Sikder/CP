#include <iostream>
using namespace std;
//hierarchical inheritance

//b and c inherits class a (two class inherites one)

class a
{
public:
    a()
    {
        cout << "constructor of a" << endl;
    }
};

class b:public a
{
public:
    b()
    {
        cout << "constructor of b" << endl;
    }
};
class c : public a
{
public:
    c()
    {
        cout << "constructor of c" << endl;
    }
};

int main()
{
c obj;

    return 0;
}
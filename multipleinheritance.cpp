#include <iostream>
using namespace std;
//multiple inheritance

//c inherits a and b both in mutiple inheritance

class a
{
public:
    a()
    {
        cout << "constructor of a" << endl;
    }
};

class b
{
public:
    b()
    {
        cout << "constructor of b" << endl;
    }
};
class c : public a ,public b
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
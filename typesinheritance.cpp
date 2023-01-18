#include <iostream>
using namespace std;
//single inheritance--previous code
//multi-level inheritance-what i have written
//c  inherits  b  and  b inherits a

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
class c : public b
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
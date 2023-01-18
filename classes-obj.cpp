//in this programme we are learning classes and objects
//  class class_name{  //this is the syntax of class
//  }
#include <iostream>
using namespace std;

class car
{
    char colour[10];

public:
    int speed;

public:
    void getdata(int distance, int fuel)
    {
        cout << "the car has covered " << distance << " Km and has consumed" << fuel << "L fuel" << endl;
    }

    void mileage(float distance, float fuel);

    void carspeed()
    {
        cout << "the car speed is" << speed << endl;
    }

} audi;

void car::mileage(float d, float f)
{
    float carmileage = d / f;
    cout << "the car mileage is " << carmileage << endl;
}

int main()
{
    car swift;
    // swift.getdata(130,7);
    // audi.getdata(150,25);
    // swift.mileage(130,7);
    swift.speed = 50;
    swift.carspeed();

    return 0;
}
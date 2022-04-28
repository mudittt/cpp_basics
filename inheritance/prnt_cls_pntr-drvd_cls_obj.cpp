/*
• Base class pointer can point on derived class object.
• But only those functions which are in base class, can be called.
• If derived class is having overrides functions they will not be called unless base class functions are declared as virtual.
• Derived class pointer cannot point on base class object.
*/
#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout << "Area of Rectangle " << endl;
    }
};

class Cuboid : public Rectangle
{
public:
    void volume()
    {
        cout << "Volume of Cuboid" << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* This is Valid */
    Rectangle *p;
    p->area();
    p = new Cuboid();
    Cuboid().area();
    /* This is not Valid */
    // Cuboid *k;
    // k = new Rectangle();
    return 0;
}

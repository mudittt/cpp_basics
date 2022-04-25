/*
Features of OOPS
•Abstraction
•Data Hiding
•Inheritance
•Polymorphism

Classes
•Class is a blue print of an object
•Class in a group of objects
•Class is a design of object
•Many object can be created from same class
•Object consumes memory equal to sum of sizes of all data members•Member functions don’t occupy memory
•Member functions are called depending on object
• . Dot operator is used for accessing members of object
•Memory allocated for object is also called as instance

*/

#include <iostream>
using namespace std;

// same as struct in C.
class rectangle
{
public:
    // by default private
    int length;
    int breadth;
    // functions will not occupy any memory but they will be there
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

class triangle
{
private:
    float base;
    float height;

public:
    void setBase(int a)
    {
        // validating the data
        if (a > 0)
        {
            base = a;
        }
        else
        {
            base = 0;
        }
    }
    // setXXXXX func are mutators
    void setHeight(int a)
    {
        height = a;
    }
    float getBase()
    {
        return base;
    }
    // getXXXXX func are accessors
    float getHeight()
    {
        return height;
    }
    float area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    /*rectangle*/
    rectangle r1, r2; // object created in stack
    r1.length = 10;
    r1.breadth = 5;
    cout << r1.area() << endl;
    r2.length = 13;
    r2.breadth = 3;
    cout << r2.area() << endl;
    rectangle r3;
    rectangle *p;
    p = &r3;
    p->length = 45;
    p->breadth = 45;
    cout << p->area() << endl;
    rectangle *q = new rectangle(); // object created in heap

    /*triangle*/
    triangle t1;
    // we can't print or set the values of base and height as they are private
    // but what we can do is ~ use the base and height in the public section of the class.
    t1.setBase(5);
    t1.setHeight(15);
    cout << t1.area() << endl;
    cout << "base of t1 is ~ " << t1.getBase() << endl;

    return 0;
}

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

#include <iostream>

int main()
{
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
    return 0;
}

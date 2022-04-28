#include <iostream>
using namespace std;

class parent
{
public:
    virtual void display()
    {
        cout << "Parent" << endl;
    }
};

class child : public parent
{
public:
    void display()
    {
        cout << "child" << endl;
    }
};

/*
• Redefining a function of base class in derived class.
• Function overriding is used for achieving runtime polymorphism.
• Prototype of a overrides function must be exactly same as base class function.
*/

/*
• Virtual functions are used for achieving polymorphism.
• Base class can have virtual functions.
• Virtual functions can be overrides in derived class.
• Pure virtual functions must be overrides by derived class.
*/

class car
{
public:
    virtual void start()
    {
        cout << "Car Started" << endl;
    }
    virtual void stop() = 0;
    // pure virtual functions
    // abstract class
    // used when these func must be overrided, to achieve polymorphism.
};

/*
• Same name different actions
• Runtime Polymorphism is achieved using function overriding
• Virtual functions are abstract functions of base class
• Derived class must override virtual function
• Base class pointer pointing to derived class object and a override function is called
*/

class innova : public car
{
public:
    void start()
    {
        cout << "Innova Started" << endl;
    }
    void stop()
    {
        cout << "Innova Stopped" << endl;
    }
};
class swift : public car
{
public:
    void start()
    {
        cout << "Swift Started" << endl;
    }
    void stop()
    {
        cout << "Swift Stopped" << endl;
    }
};

int main(int argc, char const *argv[])
{
    /*
    parent p;
    p.display();
    child c;
    c.display();
    // display function is over rided in child class.
    */

    /*
    // parent class pointer - derived clas object.
    parent *p2 = new child();
    //p2->display();
    // virtual keyword
    p2->display();
    */

    /*
    car b; //error
    abstract classes ke object nhi bana skte!
    */
    car *c = new innova();
    c->start();
    c = new swift();
    //
    c->start();
    swift().start();
    // above two lines are same
    return 0;
}
/*
BASE with ALL CONCRETE FUNCTION ~ reusability ~
BASE with ALL PURE VIRTUAL FUNCTION (interface) ~ polymorphism ~
BASE with some PURE VIRTUAL FUNCTIONs and some CONCRETE FUNCTION (abstract) ~ polymorphism + reusability ~
*/

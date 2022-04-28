// RE-USABILITY

#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    Base()
    {
        cout << "default of Base." << endl;
    }
    Base(int x)
    {
        cout << "param of Base." << x << endl;
    }
    void show()
    {
        cout << "show() -> " << x << endl;
    }
};

// semicolon represents extension.
class Derived : public Base
{
public:
    int y;
    Derived()
    {
        cout << "default of Derived." << endl;
    }
    Derived(int x)
    {
        cout << "param of Derived." << x << endl;
    }
    // calling Base for 'y'
    Derived(int x, int y) : Base(y)
    {
        cout << "param of Derived." << x << endl;
    }
    void display()
    {
        cout << "display() -> " << x << " " << y << endl;
        // getting the 'x' from 'Base'.
    }
};

/*
             ____________________
            |                   |
            | Base <--- Derived |
            |___________________|

*/
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int r, int b);
    int getLength();
    int getBreadth();
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
};

rectangle::rectangle(int r = 0, int b = 0)
{
    length = r;
    breadth = b;
}

int rectangle::getLength()
{
    return length;
}

int rectangle::getBreadth()
{
    return breadth;
}

void rectangle::setLength(int x)
{
    length = x;
}

void rectangle::setBreadth(int x)
{
    breadth = x;
}

int rectangle::area()
{
    return length * breadth;
}
int rectangle::perimeter()
{
    return 2 * (length + breadth);
}

// inherited rectangle in cuboid
class cuboid : public rectangle
{
private:
    int height;

public:
    cuboid(int l = 0, int b = 0, int h = 0)
    {
        height = h;
        /* length = l; // wrong cuz length is pvt */
        setLength(l);
        setBreadth(b);
    }
    int getHeight();
    void setHeight(int h);
    int volume();
    friend ostream &operator<<(ostream &o, cuboid &x);
};

void cuboid::setHeight(int x)
{
    height = x;
}
int cuboid::getHeight()
{
    return height;
}

int cuboid::volume()
{
    return getLength() * getBreadth() * height;
}

ostream &operator<<(ostream &o, cuboid &x)
{
    o << "Length-> " << x.getLength() << " ; "
      << "Breadth-> " << x.getBreadth() << " ; "
      << "Height-> " << x.getHeight() << " ; " << endl;
    ;
    return o;
}

int main()
{
    /*
    Base b;
    b.x = 35;
    b.show();

    Derived d;
    d.y = 34;
    d.x = 22;
    d.show();
    d.display();
    */

    /*
    cuboid c(10, 5, 3);
    cout << c.getLength() << endl;
    cout << c.volume() << endl;
    cout << c.area() << endl;
    cout << "operator overloading.." << endl;
    cout << c;
    */

    Derived d;
    // parent class consructor will be executed first.
    Derived d1(10);
    // default constructor of parent~class is always executed first.
    Derived d2(10, 20);

    return 0;
}
/*
            ~public~  ~protected~  ~private~

~inClass       yes  |      yes   |    yes

~inDerived     yes  |      yes   |    NO

~User          yes  |      NO    |    NO

*/
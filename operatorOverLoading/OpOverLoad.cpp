#include <iostream>
using namespace std;

class complex
{

public:
    int real;
    int img;

    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    /*
    complex add(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    */
    complex operator+(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

    // we can also use a friend function to subtract two complex object
    friend complex operator-(complex x, complex y);

    // insertion operator overloading.
    friend ostream &operator<<(ostream &o, complex &c);
};

// it is always recommended to define a ~ ~ ~friend operator overloading~ ~ ~ outside the class
complex operator-(complex x, complex y)
{
    complex temp;
    temp.real = x.real - y.real;
    temp.img = x.img - y.img;
    return temp;
}

ostream &operator<<(ostream &o, complex &c)
{
    o << c.real << " + i"
      << "(" << c.img << ")" << endl;
    return o;
}

int main(int argc, char const *argv[])
{
    complex c1(5, 4);
    complex c2(7, 13);
    complex c3;
    complex c4;
    /*c3 = c1.add(c2);*/
    cout << c3.real << endl;
    cout << c3.img << endl;

    // if we rename the function 'add' to 'operator+'
    /*

    c3 = c1.operator+(c2);
    we can also call it by the following line

    */
    c3 = c1 + c2;
    // compiler will look for 'operator+'
    cout << c3.real << endl;
    cout << c3.img << endl;

    c4 = c1 - c2;
    cout << c4.real << endl;
    cout << c4.img << endl;

    cout << c4;

    return 0;
}

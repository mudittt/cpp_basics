#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

/*

this will show error becuase number of parameters and
datatype of parameters are reoccuring.

float add(int x, int y)
{
    return x + y;
}

*/

// number of parameters + datatype of parameter.
float add(float x, float y)
{
    return x + y;
}
//  function overloading.
//  Cannot be done in c lang.
//  Functions with same name.
//  but with different arguements.
int add(int x, int y, int z)
{
    return x + y + z;
}

/*

template func

Datatype is decided based on the type of value passed
They work for multiple datatypes
Datatype is a template variable
Function can have multiple template variables
Function template are used for defining generic functions

*/

template <class T>
T maxo(T x, T y)
{
    return x > y ? x : y;
}

/*

•   Parameters of a function can have default values
•   If a parameter is default then , passing its value is options•Function with default argument can be called with
    variable number of argument
•   Default values to parameters must be given from right side parameter
•   Default arguments are much useful in constructors
•   Default arguments are useful for defining overloaded functions

*/

int sum(int a, int b, int c = 0)
{
    // default paramter ke right wale saare element default hone chahiye
    return a + b + c;
}

// Call by REFERANCE
// it acts as a part of main function only.
// 'a' act as nickname for 'x'
// 'b' act as nickname for 'y'
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// return by referance
int &fun(int &a)
{
    cout << a << endl;
    return a;
}

// Scoping Rule
int z = 999;

int main(int argc, char const *argv[])
{
    int a = 10, b = 5, c, d;
    c = add(a, b);
    d = add(a, b, 45);

    float i = 2.5f, j = 3.7f, k;
    k = add(i, j);

    int haha = maxo(a, b);
    cout << k << " " << haha << endl;

    int x = 55, y = 66;
    swap(x, y);
    cout << x << " " << y << endl;

    int m = 99;
    fun(m) = 33;
    // fun(m) ~ x
    // m = 33
    cout << m << endl;

    int z = 888;
    {
        int z = 777;
        cout << z << endl; // 777 ~ nearest 'z'
    }
    cout << z << endl;   // 888 ~ outside the block
    cout << ::z << endl; // 999 ~ scope resolution

    return 0;
}

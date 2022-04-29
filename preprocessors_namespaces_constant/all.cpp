#include <iostream>
using namespace std;

// before compilation
#define PI 3.145       // not consume memory
#define c cout         // c instead of cout
#define sqr(x) (x * x) // function also
#define max(x, y) (x > y ? x : y)
#define msg(x) #x // whatever x may be - it'll convert into a string

// if not defined
#ifndef g
#define g 9.8
#endif

/*
class demo
{
public:
    int x = 10;
    int y = 20;
    // adding 'const' after a function parameter will restrict the function to modify elements
    // parameters can also be made as const
    void dislay() const
    {
        // x++; //error
        cout << x << " " << y << endl;
    }
};
*/

namespace first
{
    void func()
    {
        c << "first" << endl;
    }
}
namespace second
{
    void func()
    {
        c << "second" << endl;
    }
}

int main(int argc, char const *argv[])
{
    /*
    const int x = 10; // consume memory
    // x++;          // error
    int m = 9, n = 8, l = 5;
    // int const *ptr = &m;
    const int *ptr = &m; // same
    // ++*ptr;       //error
    const int *ptr = &n; // modify the ptr, but cannot modify the data
    int *const ptr = &l; // ptr is const, cannot be modified

    // cannot modify pointer and as well as data
    const int *const ptr = &m;
    cout << *ptr << endl;
    */

    /*
    demo d;
    d.dislay();
    */

    /*
    c << max(11, 2) << endl;
    c << msg(hello) << endl;
    */

    first::func();
    using namespace second;
    func();
    return 0;
}

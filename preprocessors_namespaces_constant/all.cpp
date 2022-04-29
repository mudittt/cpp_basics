#include <iostream>
using namespace std;
#define z 10 // not consume memory

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

    demo d;
    d.dislay();
    return 0;
}

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 10;
    int &y = x; // y is just another name for x;
    // y will not hold any memory
    // cannot be declared without initialisation
    // once a referance is created for a variable, it cannot be changed at all.

    cout << x << endl;       // 10
    y++;                     // increment in value of x
    x++;                     // increment in value of x
    cout << x << endl;       // 12
    cout << &x << " " << &y; // same memory locations (mem_X " " memX)
    cout << &x << " " << y;  // (mem_X " " 12)
    return 0;
}

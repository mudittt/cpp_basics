#include <iostream>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int main(int argc, char const *argv[])
{
    // declaration
    // can point at all those function which have the same signature.
    int (*p)(int, int);
    // everything is same except for the func name
    // should always be in brackets

    // pointing to max
    p = max;

    // max is called
    cout << (*p)(3, 4) << endl;

    // pointing to min
    p = min;

    // min is called
    cout << (*p)(3, 4) << endl;

    return 0;
}

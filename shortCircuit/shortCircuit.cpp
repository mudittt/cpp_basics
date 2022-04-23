#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5, i = 5;
    if (a > b && ++i <= b)
    {
    }
    cout << "-->(&) ~ here first condition is true, second is false BUT i will increment. i = " << i << endl;
    i = 5;
    if (a < b && ++i <= b)
    {
    }
    cout << "-->(&) ~ here first condition is false, compiler will ignore the second one and i will not increment. i = " << i << endl;
    i = 5;
    if (a < b || ++i <= b)
    {
    }
    cout << "-->(||) ~ here first condition is false, second is false BUT i will increment! " << i << endl;
    i = 5;
    if (a > b || ++i <= b)
    {
    }
    cout << "-->(||) ~ here first condition is true, compiler will ignore the second one and i will not increment. i = " << i << endl;
    return 0;
}
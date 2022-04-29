/*
errors
~ syntax error ~ compiler ~
~ logical error ~ debugger ~
~ runtime error ~ user ~ ~ exceptions ~
*/

#include <iostream>
#include <cstdio>
using namespace std;
int division(int x, int y)
{
    if (y == 0)
    {
        // if-else statements will fail here
        // i.e between two functions
        throw 404;
    }
    return x / y;
}
/*
• Exceptions are Runtime errors.
• Try and catch blacks are used for handling exceptions.
• If exceptions are not handled then program may crash.
• Exceptions must give a message to the user, giving correct reason on cause of exception.
• A try block can have Multiple catch blocks.
• Catch-All can catch all exception.
• Catch-All must be a last block.
• If classes in inheritance are used in catch block then child class should come first.
*/

class myException : public exception
{
    // built-in class in c++
    // exception
public:
    void haha()
    {
        printf("myexception");
    }
};

int main()
{
    int a = 10;
    int b = 0;
    int c;

    try
    {
        if (b == 0)
        {
            // throwing an exception.
            // throw 404; // int
            // throw 40.4; // float
            throw 'm'; // char
            // throw "division by zero"; // string
            // throw myException(); // class
        }
        c = a / b;
        cout << c << endl;
    }
    // child class catch block must be above the parent class catch block
    // inheritance
    catch (char e)
    {
        cout << "error " << e << endl;
    }
    catch (...)
    {
        // Catch-All
    }

    /*
    try
    {
        // we can do nesting of try-catch also
        c = division(a, b);
        cout << c << endl;
    }
    catch (int e)
    {
        cout << "error " << e << endl;
    }
    */

    cout << "bye" << endl;
    return 0;
}

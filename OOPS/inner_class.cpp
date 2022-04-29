#include <iostream>
using namespace std;

class outer
{
public:
    int a = 10;
    static int b;
    void func()
    {
        i.show();
    }
    class inner
    {

    public:
        int x = 25;
        void show()
        {
            cout << "inner" << endl;
            // cout << a << endl; --> ERROR
            cout << b << endl; // static
        }
    };
    inner i; // object declarartion always after the definition.
};
int outer ::b = 20;

int main()
{
    outer::inner i1; // we are able to do that cuz inner is in public section.
    return 0;
}

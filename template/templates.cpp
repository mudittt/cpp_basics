#include <iostream>
using namespace std;
//
template <class T, class R>
void add(T x, R y)
{
    cout << x + y << endl;
}
//
//
template <class S>
class stack
{
private:
    S s[10];
    int top;

public:
    void push(S x);
    S pop();
};
//
//
template <class S>
void stack<S>::push(S x)
{
}
//
//
template <class S>
S stack<S>::pop()
{
}
//
//
int main(int argc, char const *argv[])
{
    int a = 9;
    float b = 2.5;
    add(a, b);
    //
    //
    stack<int> s1;
    stack<float> s2;
    return 0;
}

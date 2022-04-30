#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    printf("hello");
    std ::cout << "Bye";
    // ::    -> scope resolution
    // cout  -> console out

    cout << "\nhahahaah";
    // without writing -> (std::)
    return 0;
}
// final keyword
// auto keyword
// decltype keyword

// lambda expression
/*  [capture_list] (parameter_list)  ->  return_type{body}  */

// smart pointers
/*
~ unique -> unique_ptr <rectangle> p1(new rectangle(10,5)); // automatically deletes the object when pointer goes out of scope.
~ shared -> shared_ptr <rectangle> p1(new rectangle(10,5)); // more than one pointer to the sam eobject
~ weak   -> weak_ptr <rectangle> p1(new rectangle(10,5));   // same as shared pointer but doesnt maintain ref_counter.
*/

// ellipsis
/*
int sum(int n,...) // n is the number of parameters
{
    va_list list;
    va_start(list, n);
    int s=0;
    for (int i = 0; i < n; i++)
    {
        s += va_arg(list, int);
    }
    va_end(list);
    return s;
}
*/

#include <iostream>
// using namespace std;
// could have used this line also.
int main(int argc, char const *argv[])
{
    int a, b, c;
    std ::cout << "\nenter a number -> ";       // same as printf()
    std ::cin >> a;                             // same as scanf()
    std ::cout << "\nenter another number -> "; // same as printf()
    std ::cin >> b;                             // same as scanf()
    c = a + b;
    std::cout << "\nAddition of the above two numbers is -> " << c; // there is no '%d'. Nicee.
    return 0;
}

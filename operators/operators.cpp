#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    // int a, b, n;
    // float c;
    // a = 13;
    // b = 5;
    // c = (float)a / b; // typecasting
    // // cannot use '%' operator on float data types
    // cout << c << "\n";
    // cout << "Enter the value of 'n' to find out the sum of 'n' natural numbers ->";
    // cin >> n;
    // cout << "The sum of " << n << " natural number is -> " << (n * (n + 1)) / 2 << "\n";

    // float m, k, l;
    // float x;
    // cout << "\nEnter the coefficient of x^2 in equation '''m(x^2) + k(x) + l''' -> ";
    // cin >> m;
    // cout << "Enter the coefficient of x in equation '''m(x^2) + k(x) + l''' -> ";
    // cin >> k;
    // cout << "Enter the constant in equation '''m(x^2) + k(x) + l''' -> ";
    // cin >> l;
    // cout << "\nThe value of 'x' is -> " << ((-k) + pow((pow(k, 2) - (4 * m * l)), 0.5)) / (2 * m) << " , " << ((-k) - pow((pow(k, 2) - (4 * m * l)), 0.5)) / (2 * m);

    // pre-inrement and post-increment
    int i = 5, j;
    j = i++;
    cout << j << " " << i << endl;

    int k = 5, l;
    l = ++k;
    cout << l << " " << k << endl;

    int a = 5, b;
    b = 2 * ++a + 2 * a++;
    cout << b << " " << a << endl;

    int c = 5, d;
    d = 2 * c++ + 2 * c++;
    cout << d << " " << c << endl;

    return 0;
}
/*
    Operators       assumed precedence
    ( )                     3
    * , / , %               2
    + , -                   1

*/
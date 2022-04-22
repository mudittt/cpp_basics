#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    std::string name;                   // string name;
    std::cout << "Enter your name -> "; // cout << "Enter your name -> ";

    // std::cin >> name;                //only one word.

    std::getline(std::cin, name);
    // getline(cin, name);

    std::cout << "\nhello Mr. " << name << endl;
    // "endl" will execute next lines in a new line

    return 0;
}

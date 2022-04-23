#include <iostream>
using namespace std;

// const int mon = 0;
// const int tue = 1;
// const int wed = 2;
// const int thurs = 3;
// const int fri = 4;
// const int sat = 5;
// const int sun = 6;

// We can write enum instead.
// days is user-defined data-type.
enum days
{
    mon,   // 0
    tue,   // 1
    wed,   // 2
    thurs, // 3
    fri,   // 4
    sat,   // 5
    sun    // 6
};

// const int CS = 0;
// const int AIML = 1;
// const int IT = 2;
// const int AIDS = 3;
// const int MECH = 4;
// const int ECE = 5;
// const int EEE = 6;

enum depts
{
    CS = 1,
    AIML,      // 2
    IT,        // 3
    AIDS,      // 4
    MECH = 13, // 13
    ECE,       // 14
    EEE        // 15
};

typedef int marks;
typedef float rate;

int main(int argc, char const *argv[])
{
    cout << mon; // This will print '0'
    days d;
    d = fri;
    cout << "\n"
         << d;
    cout << "\nCS - " << CS;

    // solves readability
    marks m1, m2, m3;
    rate r1, r2, r3;
    return 0;
}

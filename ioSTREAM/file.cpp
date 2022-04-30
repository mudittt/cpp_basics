#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream &operator<<(ofstream &ofs, student s);
    friend ofstream &operator>>(ofstream &ifs, student s);
    friend ostream &operator<<(ostream &os, student &s);
};

// for inserting an object of student class into text file
ofstream &operator<<(ofstream &ofs, student s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}
// for printing an object of student class from text file
ifstream &operator>>(ifstream &ifs, student s)
{
    string n;
    int r;
    string b;
    ifs >> n;
    ifs >> r;
    ifs >> b;

    return ifs;
}
//
ostream &operator<<(ostream &os, student &s)
{
    os << "Name " << s.name << endl;
    os << "Roll " << s.roll << endl;
    os << "Branch " << s.branch << endl;
    return os;
}

int main(int argc, char const *argv[])
{
    // ofstream m("my.txt", ios::trunc);
    // ofstream m("my.txt", ios::app);
    /*
    ofstream m("my.txt");
    m << "Mudit" << endl;
    m << "22" << endl;
    m << "Artificial Intelligence and Machine Learning" << endl;
    m.close();
    */

    /*
    ifstream n;
    n.open("my.txt");
    if (!n)
    {
        cout << "file cannot be opened." << endl;
    }
    // another way of checking if file is opened or not
    if (!n.is_open())
    {
        cout << "file cannot be opened." << endl;
    }
    string name, branch;
    int roll;
    n >> name;
    n >> roll;
    n >> branch; // only 'Artificial'
    n.close();
    cout << name << " " << roll << " " << branch << endl;
    if (!n.eof())
    {
        cout << "end of file not reached" << endl;
    }
    */

    /*
    student s1, s2, s3;
    s1.name = "Arjun";
    s1.roll = 12;
    s1.branch = "chem";
    //
    s2.name = "Mudit";
    s2.roll = 22;
    s2.branch = "aiml";
    //
    s3.name = "Ved";
    s3.roll = 42;
    s3.branch = "politics";

    ofstream fi;
    fi.open("my.txt");
    // writing s1 details in a file
    fi << s1.name << endl
       << s1.roll << endl
       << s1.branch << endl;
    // writing s2 details in a file
    fi << s2.name << endl
       << s2.roll << endl
       << s2.branch << endl;

    // we can directly insert an object now after overriding
    fi << s3;
    fi.close();

    ifstream fo;
    fo.open("my.text");
    fo >> s1;
    cout << s1;
    */

    // hex is a manipulator
    cout << hex << 163;
    /*
    hex ~ hexadecimal
    oct ~ octal
    dec ~ decimal
    fixed ~ exactly as written
    scientific ~ e^power form
    set() ~
    left ~
    right ~
    ws ~ white space
    */
    cout << scientific << 256.546 << endl;
    cout << fixed << 256.546 << endl;
    cout << setprecision(2) << 256.546 << endl;
    // cout << set(10) << "hello" << endl; error
    // cout << 10 << ws << 20 << endl; error

    return 0;
}

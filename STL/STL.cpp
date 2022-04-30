/* STANDARD TEMPLATE LIBRARIES */
/* BUILT-IN CLASSES IN C++ */
#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <set>
#include <queue>
#include <stack>
#include <map> //<key, value>

using namespace std;
/*

search()
sort()
binary_searc()
reverse()
concatenate()
copy()
union()
intersection()
merge()
heap()

*/

/*

vector - self managed array
~ push-back()
~ pop-back()
~ insert()
~ remove()
~ size()
~ empty()

*/

/*

list - doubly linked list
forward-list - singly linked list
deque - double ended vector

~ push-back()
~ pop-back()
~ insert()
~ remove()
~ size()
~ empty()
~ push-front()
~ pop-front()
~ back()
~ front()

*/

/*

priority queue - heap
(always the largest value will be deleted.)
stack ~ LIFO

~ push()
~ pop()
~ empty()
~ size()

*/

/*

set - contains only unique element
(duplicates not allowed)
(not maintain the order)

multiset - set but allows duplicates

*/
/*

maps - key + value
(unique keys)
(hash table)
(1. + "Amana")
(2. + "Khan")
(3. + "John")


multimap - sam ekey-value pair is not allowed
(duplicate keys are allowed)

*/

int main()
{
    // now instead of 'vector' we can also write 'list' or 'forward-list' or 'deque'
    vector<int> v = {10,
                     40,
                     20,
                     90};
    v.push_back(25);
    v.push_back(70);
    v.pop_back();
    /*
    for (int x : v)
    {
        cout << x << endl;
    }
    */

    vector<int>::iterator itr;
    // we can modify/edit values using iterators also
    // begin() func is available in all containers
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
        // iterator is like a pointer
    }
    map<int, string> m;
    m.insert(pair<int, string>(1, "mudit"));
    m.insert(pair<int, string>(2, "Ved"));
    m.insert(pair<int, string>(3, "Gagan"));

    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
        // iterator is like a pointer
    }
    map<int, string>::iterator itt;
    itt = m.find(3); // searching for a key.
    cout << itt->second << endl;
    return 0;
}

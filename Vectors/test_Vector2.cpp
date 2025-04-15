#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    Vector<char> v; // Object of class Vector
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    v.push_back('e');

    cout << v.at(2) << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.isEmpty() << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    v.pop_back();
    cout << endl
         << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
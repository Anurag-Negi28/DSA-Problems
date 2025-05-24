#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    Vector<int> v; // Object of class vector
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(25);
    v.push_back(26);

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
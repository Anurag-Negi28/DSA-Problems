#include <iostream>
using namespace std;

class vector
{
    // Data members of class vector
private:
    int cs;
    int ms;
    int *arr;
    // Constructors, destructors or methods of vector class
public:
    vector(int max_size = 1) // Constructor of class vector
    {
        cs = 0;
        ms = max_size;
        arr = new int[ms];
    }
    // Methods of vector class
    void push_back(int d)
    {
        if (cs == ms)
        {
            int *oldArr = arr; // Assigning pointer to old array
            ms = 2 * ms;       // Doubling the size of array
            arr = new int[ms]; // Creating a new array
            // Copy elements of old array into new array
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            // Free up olf array memory
            delete[] oldArr;
        }
        arr[cs] = d;
        cs++;
    }
    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }
    bool isEmpty()
    {
        return cs == 0;
    }
    int front()
    {
        return arr[0];
    }
    int back()
    {
        return arr[cs - 1];
    }
    int at(int i)
    {
        return arr[i];
    }
    int size()
    {
        return cs;
    }
    int capacity()
    {
        return ms;
    }
    // Operator function
    int operator[](int i)
    {
        return arr[i];
    }
};

int main()
{
    vector v; // Object of class vector
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(25);
    v.push_back(25);

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
#include <iostream>
using namespace std;

template <typename T>
class Vector
{
    // Data members of class vector
private:
    int cs;
    int ms;
    T *arr;
    // Constructors, destructors or methods of vector class
public:
    Vector(int max_size = 1) // Constructor of class vector
    {
        cs = 0;
        ms = max_size;
        arr = new T[ms];
    }
    // Methods of vector class
    void push_back(int d)
    {
        if (cs == ms)
        {
            T *oldArr = arr; // Assigning pointer to old array
            ms = 2 * ms;     // Doubling the size of array
            arr = new T[ms]; // Creating a new array
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
    T front()
    {
        return arr[0];
    }
    T back()
    {
        return arr[cs - 1];
    }
    T at(int i)
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
    T operator[](int i)
    {
        return arr[i];
    }
};

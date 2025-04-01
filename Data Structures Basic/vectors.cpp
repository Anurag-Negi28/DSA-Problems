#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr(10, 3); // Intializing a vector of integers of size 100 with 0
    cout << "Size of the vector " << arr.size() << endl;
    cout << "Cpacity of the vector " << arr.capacity() << endl; // Capcity of the vector
    arr.push_back(17);
    arr.push_back(90);
    cout << "Cpacity of the vector " << arr.capacity() << endl; // Capacity of the vector double downs
    arr.pop_back();
    cout << "Cpacity of the vector " << arr.capacity() << endl;
    for (auto i : arr)
    {
        cout << i << ", ";
    }
}
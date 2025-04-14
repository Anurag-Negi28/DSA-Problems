// We will dynamically alloacte the array using new keyword and then destroy it using delete keyword
#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[100]; // Dunamically allocated a 100 size array in the heap memory
    cout << arr << endl;     // Printing memory address
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        cout << arr[i] << " ";
    }
    delete[] arr; // Deleting allocated space
    cout << endl
         << arr << endl;
    // cout << arr[2];  It will cause undefined behavior as arr is a;ready deleted
    return 0;
}
// An example of passing by reference in arrays

#include <iostream>
using namespace std;
/*
void printArray(int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array in function" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // 1
    }
}
*/
void printArray(int *arr, int n)
{
    cout << "Array in function" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // 1 2 3 4 5 6
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array in main" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; // 1 2 3 4 5 6
    printArray(arr, n);
}
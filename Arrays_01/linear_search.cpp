#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 8, 6, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    int index = linearSearch(arr, n, key);
    if (index != -1)
    {
        cout << key << " is present at " << index;
    }
    else
    {
        cout << key << " is not present";
    }
}
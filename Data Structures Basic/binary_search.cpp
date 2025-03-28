#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 7, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    int index = binarySearch(arr, n, key);
    if (index != -1)
    {
        cout << key << " is present at " << index;
    }
    else
    {
        cout << key << " is not present";
    }
}
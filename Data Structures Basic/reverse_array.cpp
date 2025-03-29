#include <iostream>
using namespace std;

int reverseArray(int *arr, int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]); // Inbuilt function used for swapping
        s++;
        e--;
    }
}

int main()
{
    int arr[] = {2, 4, 7, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = reverseArray(arr, n);
    for (int i : arr)
    {
        cout << i << " ";
    }
}
#include <iostream>
using namespace std;

int printPairs(int *arr, int n)
{
    int x, y;
    for (int i = 0; i < n; i++)
    {
        x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            y = arr[j];
            cout << "(" << x << "," << y << ")" << endl;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 2, 4, 1, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    printPairs(arr, n);
}
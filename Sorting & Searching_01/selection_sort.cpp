#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    int minPosition;
    for (int pos = 0; pos <= n - 2; pos++)
    {
        minPosition = pos;
        for (int j = pos; j < n; j++)
        {
            if (arr[j] < arr[minPosition])
            {
                minPosition = j;
            }
        }
        swap(arr[pos], arr[minPosition]);
    }
}

int main()
{
    vector<int> arr = {5, 3, 8, 6, 2, 7, 4, 1};
    selectionSort(arr);
    for (auto i : arr)
    {
        cout << i << ", ";
    }
}
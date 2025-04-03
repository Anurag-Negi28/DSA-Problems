// Bubble sort is a sorting technique which sorts in O(n^2) time by comparing to its neighbour

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {5, 3, 8, 6, 2, 7, 4, 1};
    bubbleSort(arr);
    for (auto i : arr)
    {
        cout << i << ", ";
    }
}
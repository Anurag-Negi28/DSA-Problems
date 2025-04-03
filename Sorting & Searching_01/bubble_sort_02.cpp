// Bubble sort is a sorting technique which sorts in O(n^2) time by comparing to its neighbour
// Optimized Bubble sort algo which detects if the array is already sorted or not by using a flag variable
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (!flag)
        {
            break;
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
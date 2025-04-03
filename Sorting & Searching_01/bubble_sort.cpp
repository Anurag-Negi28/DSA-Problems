#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
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
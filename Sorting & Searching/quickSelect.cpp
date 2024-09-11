/*
Find the kth smallest number in a list of integers
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int> arr, int s, int e)
{
    int pivot = arr[e];
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}

int quickSelect(vector<int> arr, int s, int e, int k)
{
    if (s == e)
    {
        return arr[s];
    }
    int p = partition(arr, s, e);
    if (p == k)
    {
        return arr[p];
    }
    else if (p < k)
    {
        return quickSelect(arr, p + 1, e, k);
    }
    else
    {
        return quickSelect(arr, s, p - 1, k);
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    int k = 2;
    cout << quickSelect(arr, 0, arr.size() - 1, k);
    return 0;
}
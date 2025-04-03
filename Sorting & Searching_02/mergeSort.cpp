// Merge Sort
/*
Merge sort is a stable sorting algorithm which follows the stratergy of divide and conquer
It has a time complexity of O(nlogn) and space complexity of O(n). It is in space sorting which means it requires extra space to store the elements.
It is a stable sorting algorithm which means that the relative order of equal elements is preserved.
*/

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;
    vector<int> temp;
    // compare elements of two arrays
    while (i <= m && j <= e)
    {
        if (arr[i] < arr[j]) //
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    // copy remaining elements
    while (i <= m)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }
    int k = 0;
    // copy elements back to original array
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[k++];
    }
}

void mergeSort(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // divide the array into two parts
    int m = (s + e) / 2;
    mergeSort(arr, s, m);
    mergeSort(arr, m + 1, e);
    // merge the two arrays
    return merge(arr, s, e);
}

int main()
{
    vector<int> arr = {10, 5, 2, 2, 3, 1, -1, -6, 9, 11};
    mergeSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}
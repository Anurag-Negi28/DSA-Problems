/*
Inversion Count
Given an array containing integers, you need to count the
total number of inversions.
**Inversion** Two elements a[i] and a[j] form an inversion if
a[i] > a[j] and i < j.
Sample Input
[0,5,2,3,1]
Sample Output
5
*/

#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;
    vector<int> temp;
    int count = 0;
    // compare elements of two arrays
    while (i <= m && j <= e)
    {
        if (arr[i] < arr[j]) //
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            count += m - i + 1; // count of inversions
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
    return count;
}

int inversionSort(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // divide the array into two parts
    int m = (s + e) / 2;
    int C1 = inversionSort(arr, s, m);     // count of inversions in left half
    int C2 = inversionSort(arr, m + 1, e); // count of inversions in right half
    int CI = merge(arr, s, e);             // count of inversions in merged array
    return (C1 + C2 + CI);                 // total count of inversions
}

int main()
{
    vector<int> arr = {10, 5, 2, 2, 3, 1, -1, -6, 9, 11};
    inversionSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}
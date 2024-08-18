// Subarray Sort
// Given an array of size at-least two, find the smallest
// subarray that needs to be sorted in place so that entire
// input array becomes sorted.
// If the input array is already sorted, the function should
// return [-1,-1], otherwise return the start & end index of
// smallest subarray.
// Sample Input
// al = [1, 2, 3, 4, 5, 8, 6, 7, 9, 10, 11]
// Sample
// Output
//[5,7]

// using the sorting method and then comparing the arrays in O(nlon) time complexity

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> subarraySort(vector<int> arr)
{
    int n = arr.size();
    vector<int> sortedArr(arr);
    sort(sortedArr.begin(), sortedArr.end());
    int i = 0;
    while (i < n && arr[i] == sortedArr[i])
    {
        i++;
    }
    int j = n - 1;
    while (j >= 0 && arr[j] == sortedArr[j])
    {
        j--;
    }
    if (i == n)
    {
        return {-1, -1};
    }
    return {i, j};
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 8, 6, 7, 9, 10, 11};
    vector<int> res = subarraySort(arr);
    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}

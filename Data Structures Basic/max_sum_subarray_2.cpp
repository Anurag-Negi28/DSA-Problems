// Calculating largest sum subarray using prefix sum in T(n)=O(n^2) time

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int prefixSumSubarray(int *arr, int n)
{
    int maxSumSubarray = INT_MIN;
    int prefixArr[n] = {0};
    prefixArr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixArr[i] = prefixArr[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sumSubarray = 0;
            sumSubarray = i > 0 ? prefixArr[j] - prefixArr[i - 1] : prefixArr[j];
            maxSumSubarray = max(maxSumSubarray, sumSubarray);
        }
    }
    return maxSumSubarray;
}

int main()
{
    int arr[] = {1, -2, 3, -4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest sum of Subarray " << prefixSumSubarray(arr, n);
}

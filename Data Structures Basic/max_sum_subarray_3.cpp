// Maximum sum subarray using kadane's algorithm in O(n) time

// Calculating largest sum subarray using prefix sum in T(n)=O(n^2) time

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int prefixSumSubarray(int *arr, int n)
{
    int maxSumSubarray = INT_MIN;
    int cs = 0;
    for (int i = 0; i < n; i++)
    {
        if (cs < 0)
        {
            cs = 0;
        }
        cs = cs + arr[i];
        maxSumSubarray = max(maxSumSubarray, cs);
    }
    return maxSumSubarray;
}

int main()
{
    int arr[] = {1, -2, 3, -4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest sum of Subarray " << prefixSumSubarray(arr, n);
}

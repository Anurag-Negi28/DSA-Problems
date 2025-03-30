// Brute force approach of T(n)=O(n^3)

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int maxSubarrays(int *arr, int n)
{
    int maxSumSubarray = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sumSubarray = 0;
            for (int k = i; k <= j; k++)
            {
                sumSubarray += arr[k];
            }
            maxSumSubarray = max(maxSumSubarray, sumSubarray);
        }
    }
    return maxSumSubarray;
}

int main()
{
    int arr[] = {1, -2, 3, -4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest sum of Subarray " << maxSubarrays(arr, n);
}
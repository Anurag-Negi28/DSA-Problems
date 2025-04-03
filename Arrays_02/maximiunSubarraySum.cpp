// Maximum Subarray Sum
// Implement a function that takes an input a vector of integers, and prints the maximum subarray sum that can be formed. A subarray is defined as consecutive segment of the array. If all numbers are negative, then return 0.

// Input

// {-1,2,3,4,-2,6,-8,3}
// Output

// 13

#include <iostream>
#include <vector>
using namespace std;

int maxmimumSubarraySum(vector<int> arr)
{
    int n = arr.size();
    int max_sum = arr[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > max_sum)
        {
            max_sum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max_sum;
}

int main()
{
    vector<int> arr = {-1, 2, 3, 4, -2, 6, -8, 3};
    cout << maxmimumSubarraySum(arr) << endl;
    return 0;
}

// Maximum sum subarray for special case if all the elements are x=zero we need to first calculate
// we need to calculate the maximum negative element in the array

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maxSumSubarray(vector<int> arr)
{
    // If all the elememts of the vectors are negative
    bool allNegative = true;
    int maximum = INT_MIN;
    // Check if all the elements are negative
    for (auto i : arr)
    {
        if (i > 0)
        {
            allNegative = false;
        }
        maximum = max(i, maximum);
    }
    // If all the elements are negative then calculate the highest number
    if (allNegative)
    {
        return (maximum);
    }

    // Apply Kadane's logic
    int currentSum = 0;
    int maximumSum = 0;
    for (auto i : arr)
    {
        currentSum += i;
        maximumSum = max(maximumSum, currentSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return maximumSum;
}

int main()
{
    vector<int> arr = {-3, -2, -5, -1, -6, -3, -2, -7, -5};
    cout << "Largest sum of Subarray " << maxSumSubarray(arr);
}

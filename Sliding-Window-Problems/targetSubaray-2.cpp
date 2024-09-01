/* We utilize the prefix sum technique to iterate through the array and calculate the cumulative sum.
While traversing, we maintain a hashmap to store the frequency of prefix sums encountered so far.
At each step, we check if the complement of the current sum (current sum minus target sum) exists in the hash map.
If the complement exists, it implies the presence of subarrays with the target sum. We increment the result count accordingly.
After processing all elements, we return the count representing the number of subarrays with the target sum.
*/

#include <bits/stdc++.h>
using namespace std;

int cntSubarrays(vector<int> arr, int sum)
{
    // complete this method
    unordered_map<int, int> prevSum;
    int n = arr.size();
    int res = 0;

    // Sum of elements so far.
    int currsum = 0;

    for (int i = 0; i < n; i++)
    {

        // Add current element to sum so far.
        currsum += arr[i];

        // If currsum is equal to desired sum,
        // then a new subarray is found. So
        // increase count of subarrays.
        if (currsum == sum)
            res++;

        // currsum exceeds given sum by currsum
        //  - sum. Find number of subarrays having
        // this sum and exclude those subarrays
        // from currsum by increasing count by
        // same amount.
        if (prevSum.find(currsum - sum) != prevSum.end())
            res += (prevSum[currsum - sum]);

        // Add currsum value to count of
        // different values of sum.
        prevSum[currsum]++;
    }

    return res;
}

int main()
{
    vector<int> input = {1, 1, 1};
    int k = 2;
    cout << cntSubarrays(input, k);
    return 0;
}
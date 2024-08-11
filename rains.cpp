// Rains
// Given n non-negative integers representing an elevation
// map where the width of each bar is 1, compute how much
// water it can trap after raining.

#include <iostream>
#include <vector>
using namespace std;

int rain(vector<int> arr)
{
    int n = arr.size();
    if (n < +2)
    {
        return 0;
    }

    // Left max, right max
    vector<int> left(n, 0), right(n, 0);
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
        right[n - i - 1] = max(right[n - i], arr[n - i - 1]);
    }

    int water = 0;
    for (int i = 0; i < n; i++)
    {
        water += min(left[i], right[i]) - arr[i];
    }
    return water;
}

int main()
{
    vector<int> arr{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << rain(arr) << endl;
    return 0;
}
/*
Game of Greed
You are playing a game with your 'k' friends. You have an array of N coins, at each index i you have a coin of value a[i].
Your task is to divide the coins, among a group of K friends by doing consecutive segments (k-subarrays) of the array.
Each friend will get a total sum of the coins in that subarray. Since all your friends are greedy, and they will pick the largest k-1 segments and you will get the smallest segment. Find out the maximum value you can make by making an optimal partition.

Note : The coins array may or may not be sorted!

(Refer Hints at the end if needed)


Input

K = 3
coins = {1,2,3,4};
Output

3

Explanation
The ideal partition looks like this -

{1 + 2} = 3

{3} = 3

{4} = 4

You will get a maximum of 3 coins in the best case.

HINTS
======

Hint  1 : Can you apply recursion, Brute force?

Hint 2 : Can you apply Binary Search, is the search space monotonic?

Hint 3:  You can do binary search on search space (MIN, MAX) where Min is the smallest coin denomination in the array and MAX is the sum of all coins in the array.
*/

#include <bits/stdc++.h>
using namespace std;

bool canDivide(vector<int> arr, int middle, int k)
{
    int sum = 0;
    int count = 0;
    for (auto i : arr)
    {
        sum += i;
        if (sum >= middle)
        {
            count++;
            sum = 0;
            continue;
        }
    }
    if (count >= k) // Check for minimum k segments and if they exceed as well
    {
        return true;
    }
    else
    {
        return false;
    }
}

int getCoins(vector<int> arr, int k)
{
    // return the max coins that you can win!
    int n = arr.size();
    int max = 0;
    int min = INT_MAX;
    int result;
    for (int i = 0; i < n; i++)
    {
        max = max + arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    while (min <= max)
    {
        int mid = min + (max - min) / 2;
        bool can = canDivide(arr, mid, k);
        if (can)
        {
            result = mid;
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    return result;
}

int main()
{
    vector<int> arr{1, 2, 3, 4};
    int k = 3;
    cout << getCoins(arr, k);
    return 0;
}
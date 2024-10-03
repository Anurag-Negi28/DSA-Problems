/*
Min Pair
Given two non-empty arrays, find the pair of numbers
(one from each array) whose absolute difference is
minimum. Print the any one pair with the smallest
difference.
Sample Input
al = [-1, 5, 10, 20, 3]
a2 = [26, 134, 135, 15, 17]
5:41
Sample
Output=[20,17]
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void minPairs(vector<int> arr1, vector<int> arr2)
{
    sort(arr2.begin(), arr2.end());
    int diff = INT_MAX;
    int p1, p2;
    for (auto x : arr1)
    {
        int lb = lower_bound(arr2.begin(), arr2.end(), x) - arr2.begin();
        if (lb >= 1 && x - arr2[lb - 1] < diff)
        {
            diff = x - arr2[lb - 1];
            p2 = x;
            p1 = arr2[lb - 1];
        }
        if (lb != arr2.size() && arr2[lb] - x < diff)
        {
            diff = arr2[lb] - x;
            p2 = arr2[lb];
            p1 = x;
        }
    }
    cout << "[" << p2 << "," << p1 << "]";
}

int main()
{
    // main function is given here
    vector<int> arr1{-1, 5, 10, 20, 3};
    vector<int> arr2{26, 134, 135, 15, 17};
    minPairs(arr1, arr2);
    return 0;
}
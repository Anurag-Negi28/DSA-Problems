// Min Swaps
// Given an array of size N, find the minimum number of
// swaps needed to make the array as sorted.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimumSwap(vector<int> arr)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < arr.size(); i++)
    {
        v.push_back({arr[i], i});
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].second == i)
        {
            continue;
        }
        else
        {
            swap(v[i].first, v[v[i].second].first);
            swap(v[i].second, v[v[i].second].second);
        }
        if (i != v[i].second)
        {
            i--;
        }
        ans++;
    }
    return ans;
}

int main()
{
    vector<int> arr = {10, 11, 5, 4, 3, 2, 1};
    cout << minimumSwap(arr) << endl;
    return 0;
}
// Given an array containing N integers, and an number S
// denoting a target sum.
// Find two "distinct integers that can pair up to form target
// sum. Let us assume there will be only one such pair.
// Input
// array = [10, 5, 2, 3, -6, 9, 11]
// 16
// S =4
// Output
// [10,-6]

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

vector<vector<int>> findPair(vector<int> arr, int S)
{
    unordered_set<int> st;
    vector<vector<int>> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = S - arr[i];
        if (st.find(x) != st.end())
        {
            result.push_back({min(x, arr[i]), max(x, arr[i])});
        }
        st.insert(arr[i]);
    }
    sort(result.begin(), result.end());
    return result;
}

int main()
{
    vector<int> arr = {10, 5, 2, 2, 3, 1, -1, -6, 9, 11};
    int S = 4;
    vector<vector<int>> result = findPair(arr, S);
    if (result.size() == 0)
    {
        cout << "No such pair";
    }
    else
    {
        for (auto i : result)
        {
            cout << i[0] << "," << i[1] << endl;
        }
    }
    return 0;
}
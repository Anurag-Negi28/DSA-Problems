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
#include <unordered_set>
using namespace std;

vector<int> findPair(vector<int> arr, int S)
{
    unordered_set<int> st;
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = S - arr[i];
        if (st.find(x) != st.end())
        {
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        st.insert(arr[i]);
    }
    return {};
}

int main()
{
    vector<int> arr = {10, 5, 2, 3, -6, 9, 11};
    int S = 4;
    vector<int> result = findPair(arr, S);
    if (result.size() == 0)
    {
        cout << "No such pair";
    }
    else
    {
        cout << result[0] << "," << result[1];
    }
    return 0;
}
// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
// Note:
// Each pair should be sorted i.e the first value should be less than or equals to the second value.
// Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> arr, int sum)
{
    vector<vector<int>> result;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                result.push_back({min(arr[i], arr[j]), max(arr[i], arr[j])});
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main()
{
    vector<int> arr = {10, 5, 2, 2, 1, -1, 3, -6, 9, 11};
    int S = 4;
    vector<vector<int>> result = pairSum(arr, S);
    for (auto i : result)
    {
        cout << i[0] << "," << i[1] << endl;
    }
    return 0;
}
/**Given an array containing N integers, and an numberS
denoting a target sum.
Find all distinct integers that can add up to form target
sum. The numbers in each triplet should be ordered in
ascending order, and triplets should be ordered too.
Return empty array if no such triplet exists.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> triplets(vector<int> arr, int sum)
{
    vector<vector<int>> result;
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i <= n - 3; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int current_sum = arr[i];
            current_sum += arr[j];
            current_sum += arr[k];
            if (current_sum == sum)
            {
                result.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (current_sum > sum)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return result;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int sum = 18;
    auto result = triplets(arr, sum);
    for (auto v : result)
    {
        for (auto no : v)
        {
            cout << no << ",";
        }
        cout << endl;
    }
    return 0;
}
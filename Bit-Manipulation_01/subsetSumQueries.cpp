/*
Subset Sum Queries
Given an array and N number of queries, where in each query you have to check whether a subset whose sum is equal to given number exists in the array or not.
*/
#include <bits/stdc++.h>
using namespace std;

vector<bool> subsetSum(vector<int> num, vector<int> query)
{
    int N = query.size();
    // your code goes here
    // Step 1-Find the subsets and sum them and store them in a vector
    int noSubsets = 1 << num.size();
    vector<int> result;
    for (int i = 0; i < noSubsets; i++)
    {
        int sum = 0;
        for (int j = 0; j < num.size(); j++)
        {
            if (i & (1 << j))
            { // To check where is the set bit
                sum += num[j];
            }
        }
        result.push_back(sum);
    }
    vector<bool> answer;
    for (int i = 0; i < N; i++)
    {
        auto it = find(result.begin(), result.end(), query[i]);
        if (it != result.end())
        {
            answer.push_back(true);
        }
        else
        {
            answer.push_back(false);
        }
    }
    return answer;
}
int main()
{
    vector<int> num = {1, 2, 3};
    vector<int> query = {5, 3, 8};

    vector<bool> result = subsetSum(num, query);

    for (bool res : result)
    {
        cout << (res ? "Yes" : "No") << " ";
    }

    return 0;
}
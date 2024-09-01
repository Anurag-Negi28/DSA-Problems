#include <bits/stdc++.h>
using namespace std;

int cntSubarrays(vector<int> arr, int k)
{
    // complete this method
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> input = {1, 1, 1};
    int k = 2;
    cout << cntSubarrays(input, k);
    return 0;
}
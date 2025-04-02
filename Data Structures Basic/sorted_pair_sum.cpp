#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
    // your code goes
    int absDiff;
    int n = arr.size();
    int minDiff = INT_MAX;
    int rightIndx, leftIndx;
    int cs;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        cs = arr[start] + arr[end];
        if (abs(cs - x) < minDiff)
        {
            leftIndx = start;
            rightIndx = end;
            minDiff = abs(cs - x);
        }
        if (cs < x)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return make_pair(arr[leftIndx], arr[rightIndx]);
}

int main()
{
    vector<int> arr = {1, 3, 4, 7, 10, 12, 14, 17, 20};
    int x = 34;
    pair<int, int> result = closestSum(arr, x);
    cout << "Closest pair: (" << result.first << ", " << result.second << ")";
}
// more optimized appraoch for finding the lower bound in O(log n) time
// applying binary search
#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> arr, int val)
{
    int start = 0;
    int end = arr.size();
    int ans = -1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] <= val)
        {
            start = mid + 1;
            ans = arr[mid];
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 16};
    int val = 2;
    cout << "Lower bound " << lowerBound(arr, val);
}
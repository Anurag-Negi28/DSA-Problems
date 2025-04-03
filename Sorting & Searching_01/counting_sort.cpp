#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void countingSort(vector<int> &arr)
{
    if (arr.empty()) // Handle empty array edge case
        return;
    int range = INT_MIN;
    // Find the maximum value in the array to determine the range of the count array
    for (auto i : arr)
    {
        range = max(i, range);
    }
    int n = arr.size();
    vector<int> count(range + 1, 0);
    // update the frequency in the count array
    for (auto i : arr)
    {
        count[i]++;
    }
    // Place the values in the original array
    int j = 0;
    for (int i = 0; i <= range; i++)
    {
        while (count[i] > 0)
        {
            arr[j] = i;
            count[i]--;
            j++;
        }
    }
}

int main()
{
    vector<int> arr = {9, 10, 9, 1, 2, 3, 1, 2, 3, 10, 12};
    countingSort(arr);
    for (auto i : arr)
    {
        cout << i << ", ";
    }
}
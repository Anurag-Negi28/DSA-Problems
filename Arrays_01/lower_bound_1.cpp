// Naive approach in O(n) time complexity

#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> arr, int val)
{
    if (val < arr[0])
    {
        return -1;
    }
    int count = 0;
    for (auto i : arr)
    {
        if (val == i)
        {
            return val;
        }
        if (val > i)
        {
            count++;
        }
    }
    return arr[count - 1];
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    int val = 2;
    cout << "Lower bound " << lowerBound(arr, val);
}
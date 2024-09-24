/*
Frequency Count
Given a sorted array which can contain repeated
elements, and an element K, we need to find the
frequency of a given element.
Input Array :
[0, 1, 1,1,1,2,2,2,3,4,4,5, 10]
Key = 3
Output : 3
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int LowerBound(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int lowerBound = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            lowerBound = mid;
            end = mid - 1; // for lower bound search in the right subarray
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return lowerBound;
}

int UpperBound(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int upperBound = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            upperBound = mid;
            start = mid + 1; // for upper bound search in the left subarray
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return upperBound;
}

int main()
{
    vector<int> arr = {0, 1, 1, 1, 1, 2, 2, 2, 3, 4, 4, 5, 10};
    int key = 2;
    int lowerBound = LowerBound(arr, key);
    cout << lowerBound << endl;
    int upperBound = UpperBound(arr, key);
    cout << upperBound << endl;
    int frequency = upperBound - lowerBound + 1;
    cout << frequency << endl;
    // using lower bound and upper bound algorithm from STL
    cout << upper_bound(arr.begin(), arr.end(), key) - lower_bound(arr.begin(), arr.end(), key) << endl;
    return 0;
}
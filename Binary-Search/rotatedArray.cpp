/*
Rotated Search
Write a function that takes input an sorted array of
distinct integers, which is rotated about a pivot point and
finds the index of any given element.
Sample Input
[7,9, 10, 1,2, 3, 4,5, 6]
element =4
Sample Output
*/

#include <iostream>
#include <vector>
using namespace std;

int rotatedArray(vector<int> arr, int k)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k)
            return mid;
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= 4 && 4 < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (arr[mid] < 4 && 4 <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {7, 9, 10, 1, 2, 3, 4, 5, 6};
    int k = 4;
    cout << rotatedArray(arr, k) << endl;
    return 0;
}
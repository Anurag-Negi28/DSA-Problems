/**Write a  function that takes input an array of distinct
integers, and returns the length of highest mountain.
• A mountain is defined as adjacent integers that are
strictly increasing until they reach a peak, at which the
become strictly decreasing.
• At least 3 numbers are required to form a mountain.*/

#include <iostream>
#include <vector>
using namespace std;

int LongestMountain(vector<int> arr)
{
    int n = arr.size();
    int largest = 0;
    for (int i = 1; i <= n - 2;)
    {
        // check if arr[i] is peak or not
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            int count = 1;
            int j = i;
            // count backwards
            while (j >= 1 && arr[j] > arr[j - 1])
            {
                j--;
                count++;
            }
            //count forwards
            while (i <= n - 2 && arr[i] > arr[i + 1])
            {
                i++;
                count++;
            }
            largest = max(largest, count);
        }
        else
        {
            i++;
        }
    }
    return largest;
}

int main()
{
    vector<int> arr{2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << LongestMountain(arr) << endl;
    return 0;
}
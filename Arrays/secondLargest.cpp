// Find the second largest element in the array in O(n) time complexity
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == INT_MIN)
    {
        return -1;
    }
    return secondLargest;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << findSecondLargest(arr.size(), arr);
    return 0;
}
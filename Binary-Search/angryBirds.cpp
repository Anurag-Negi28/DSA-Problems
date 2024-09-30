/*
Angry Birds
There is a long wire along at straight line, which contains
N bird nests at positions x1, x2 ....N.
There are B (B<=N) birds, which become angry towards
each other once put into a nest. To put the birds from
hurting each other you want to assign birds to nests such
that minimum distance between any two birds is as large
as possible. What is the largest minimum distance? dista
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isMax(vector<int> arr, int birds, int n, int sep)
{
    int b = 1;
    int location = arr[0];
    int currentLocation;
    for (int i = 0; i <= n - 1; i++)
    {
        currentLocation = arr[i];
        if (currentLocation - location >= sep)
        {
            b++;
            location = currentLocation;
            if (b == birds)
            {
                return true;
            }
        }
    }
    return false;
}

int angryBirds(vector<int> arr, int birds)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int start = arr[0];
    int ans = -1;
    int end = arr[n - 1] - arr[0];
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        bool ismax = isMax(arr, birds, n, mid);
        if (ismax)
        {
            ans = mid;
            start = mid + 1;
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
    vector<int> arr{1, 2, 4, 8, 9};
    int birds = 3;
    cout << "Max Distance Between Birds is: " << angryBirds(arr, birds);
    return 0;
}
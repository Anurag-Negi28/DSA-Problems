#include <bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> arr, bool flag)
{
    // your code  goes here
    sort(arr.begin(), arr.end(), [flag](int a, int b)
         { return flag ? a < b : a > b; });
    return arr;
}

int main()
{
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    bool flag;

    cout << "Enter 1 for ascending or 0 for descending order: ";
    cin >> flag;

    vector<int> sortedArr = sortingWithComparator(arr, flag);

    cout << "Sorted array: ";
    for (int num : sortedArr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
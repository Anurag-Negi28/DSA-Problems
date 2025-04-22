// Naive approach
// This approach creates another vector making time complexity O(n)
//hello
#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k)
{
    // your code  goes here
    int n = a.size();
    k = k % n; // Corrected modulo operation
    vector<int> arr;
    for (int i = n - k; i < n; i++)
    {
        arr.push_back(a[i]);
    }
    for (int i = 0; i < n - k; i++)
    {
        arr.push_back(a[i]);
    }
    return arr;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    vector<int> rotatedArray = kRotate(a, k);

    cout << "Rotated Array: ";
    for (int i : rotatedArray)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

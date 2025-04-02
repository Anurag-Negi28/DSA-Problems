// Optimised approch
// This approach uses inplace swapping

#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k)
{
    // your code  goes here
    int n = a.size();
    k = k % n; // Corrected modulo operation
    int s = 0;
    int e = n - k;
    int end = n - 1;
    while (s < e)
    {
        swap(a[s], a[e]);
        s++;
        e--;
    }
    while (e < end)
    {
        swap(a[e], a[end]);
        e++;
        end--;
    }
    return a;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
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
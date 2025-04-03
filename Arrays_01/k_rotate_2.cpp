// Optimised approch
// This approach uses inplace swapping

#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k)
{
    // your code  goes here
    int n = a.size();
    k = k % n; //  effective rotations
    reverse(a.begin(), a.begin() + n - k);
    reverse(a.begin() + n - k, a.end());
    reverse(a.begin(), a.end());
    return a;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    vector<int> rotatedArray = kRotate(a, k);

    cout << "Rotated Array: ";
    for (int i : rotatedArray)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
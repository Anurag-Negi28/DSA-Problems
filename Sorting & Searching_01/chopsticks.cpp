#include <bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    int n = length.size();
    int count = 0;
    sort(length.begin(), length.end());
    for (int i = 1; i < n; i++)
    {
        if (abs(length[i - 1] - length[i]) <= D)
        {
            count++;
            i++; // Skip the next stick as it is already paired
        }
    }
    return count;
}
int main()
{
    int n = 6, D = 2;
    vector<int> length = {1, 3, 3, 9, 4, 6};
    cout << pairSticks(length, D) << endl;
    return 0;
}

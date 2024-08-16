#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
using namespace std;

pair<int, int> minDifference(vector<int> a, vector<int> b)
{
    // Initialize the difference to a large value
    int difference = INT_MAX;
    pair<int, int> diff;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            int d = abs(a[i] - b[j]);
            if (d < difference)
            {
                diff.first = a[i];
                diff.second = b[j];
                difference = d;
            }
        }
    }
    return diff;
}
int main()
{
    vector<int> a = {23, 5, 10, 17, 30};
    vector<int> b = {26, 134, 135, 14, 19};
    pair<int, int> result = minDifference(a, b);
    cout << result.first << " " << result.second << endl;
    return 0;
}
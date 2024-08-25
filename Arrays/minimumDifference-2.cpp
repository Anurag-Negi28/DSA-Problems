#include <vector>
#include <algorithm>
#include <iostream>
#include <climits>
using namespace std;
// Better approach solves the problem in nlog n time complexity

pair<int, int> minDifference(vector<int> a, vector<int> b)
{
    // Complete this method
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, num1 = 0, num2 = 0;
    int difference = INT_MAX;
    int m = a.size();
    int n = b.size();

    while (i < n && j < m)
    {
        int d = abs(a[i] - b[j]);
        if (d < difference)
        {
            difference = d;
            num1 = a[i];
            num2 = b[j];
        }

        if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return make_pair(num1, num2);
}

int main()
{
    vector<int> a = {23, 5, 10, 17, 30};
    vector<int> b = {26, 134, 135, 14, 19};
    pair<int, int> result = minDifference(a, b);
    cout << result.first << " " << result.second << endl;
    return 0;
}

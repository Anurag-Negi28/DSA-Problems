#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMinimumChanges(vector<int> &fileSize, vector<int> &minSize)
{
    int n = fileSize.size();
    vector<int> deficit(n), surplus(n);
    int totalDeficit = 0, totalSurplus = 0;

    for (int i = 0; i < n; ++i)
    {
        if (fileSize[i] < minSize[i])
        {
            deficit[i] = minSize[i] - fileSize[i];
            totalDeficit += deficit[i];
        }
        else
        {
            surplus[i] = fileSize[i] - minSize[i];
            totalSurplus += surplus[i];
        }
    }

    if (totalSurplus < totalDeficit)
    {
        return -1;
    }

    int changes = 0;
    for (int i = 0; i < n; ++i)
    {
        if (deficit[i] > 0)
        {
            changes++;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (surplus[i] > 0)
        {
            changes++;
        }
    }

    return changes;
}

int main()
{
    vector<int> fileSize = {2, 5, 1};
    vector<int> minSize = {4, 4, 4};
    int result = getMinimumChanges(fileSize, minSize);
    cout << result << endl; // Output: -1
    return 0;
}
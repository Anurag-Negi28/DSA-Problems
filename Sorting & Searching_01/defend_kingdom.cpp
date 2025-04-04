#include <iostream>
#include <vector>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int defkin(int W, int H, vector<pair<int, int>> position)
{
    vector<int> width;
    vector<int> height;
    int n = position.size();

    for (int i = 0; i < n; i++)
    {
        width.push_back(position[i].first);
        height.push_back(position[i].second);
    }

    sort(width.begin(), width.end());
    sort(height.begin(), height.end());

    int maxWidth = INT_MIN;
    int maxHeight = INT_MIN;

    // Calculate gap from start to first watchtower
    int startWidth = width[0] - 1;
    int startHeight = height[0] - 1;

    // Calculate gaps between watchtowers
    for (int i = 1; i < n; i++)
    {
        int diffWidth = width[i] - width[i - 1] - 1;
        int diffHeight = height[i] - height[i - 1] - 1;

        maxWidth = max(maxWidth, diffWidth);
        maxHeight = max(maxHeight, diffHeight);
    }

    // Calculate gap from last watchtower to end
    int endWidth = W - width[n - 1];
    int endHeight = H - height[n - 1];

    // Update max width and height
    maxWidth = max(maxWidth, startWidth);
    maxWidth = max(maxWidth, endWidth);

    maxHeight = max(maxHeight, startHeight);
    maxHeight = max(maxHeight, endHeight);

    return maxHeight * maxWidth;
}
int main()
{
    int W = 15, H = 8, n = 3;

    vector<pair<int, int>> position = {{3, 8}, {11, 2}, {8, 6}};

    cout << "Maximum undefended area: " << defkin(W, H, position) << endl;

    return 0;
}

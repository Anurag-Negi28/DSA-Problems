#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    // your code goes here
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
         {
             if (a.first == b.first)         // If x values are the same
                 return a.second < b.second; // Sort by y in ascending order
             return a.first < b.first;       // Otherwise, sort by x in ascending order
         });
    return v;
}

int main()
{
    vector<pair<int, int>> points = {{-3, 4}, {1, -2}, {-5, 0}, {2, 2}, {-3, -1}};

    vector<pair<int, int>> sortedPoints = sortCartesian(points);

    cout << "Sorted points:\n";
    for (const auto &p : sortedPoints)
    {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}

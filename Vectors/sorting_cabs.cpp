#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Custom comparator function to sort pairs based on the sum of their elements
bool compare(pair<int, int> s1, pair<int, int> s2)
{
    return (s1.first + s1.second) < (s2.first + s2.second);
}

vector<pair<int, int>> cartesianSort(vector<pair<int, int>> arr)
{
    sort(arr.begin(), arr.end(), compare);
    return arr;
}

int main()
{
    vector<pair<int, int>> cabs = {{2, 3}, {1, 2}, {3, 4}, {2, 4}, {1, 4}};
    vector<pair<int, int>> sortedCabs = cartesianSort(cabs);

    for (auto cab : sortedCabs)
    {
        cout << "(" << cab.first << ", " << cab.second << ")" << endl;
    }

    return 0;
}
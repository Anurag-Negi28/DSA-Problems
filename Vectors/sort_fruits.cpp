#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, int> s1, pair<string, int> s2)
{
    return s1.second < s2.second;
}

vector<pair<string, int>> sortFruits(vector<pair<string, int>> v, string S)
{
    // your code  goes here
    if (S == "price")
    {
        sort(v.begin(), v.end(), compare);
    }
    else
    {
        sort(v.begin(), v.end());
    }
    return v;
}
int main()
{
    vector<pair<string, int>> fruits = {{"Mango", 100}, {"Guava", 70}, {"Grapes", 40}, {"Apple", 60}, {"Banana", 30}};
    string S = "price";

    vector<pair<string, int>> sortedFruits = sortFruits(fruits, S);

    for (auto fruit : sortedFruits)
    {
        cout << fruit.first << " " << fruit.second << endl;
    }

    return 0;
}
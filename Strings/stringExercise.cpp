#include <bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big, string small)
{
    // store the occurrences in the result vector
    vector<int> result = {};
    int n = big.length();
    int f;
    for (int i = 0; i < n; i = i + f)
    {
        f = big.find(small, f + 1);
        result.push_back(f);
    }
    return result;
}

int main()
{
    string big = "I am a doctor and I am a good doctor and I am a great doctor";
    string small = "doctor";
    vector<int> result = stringSearch(big, small);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}

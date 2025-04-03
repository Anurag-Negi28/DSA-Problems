#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// custom comparotor function
bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    vector<int> arr;
    for (int i = 0; i < 10; ++i)
    {
        arr.push_back(rand() % 100); // Random numbers between 0 and 99
    }
    sort(arr.begin(), arr.end(), compare); // O(nlog n) time complexity
    for (auto i : arr)
    {
        cout << i << ", ";
    }
}
// Optimized approach using deques in O(n) time complexity

#include <vector>
#include <deque>
#include <iostream>
using namespace std;

vector<int> maxInWindow(vector<int> a, int k)
{

    // Algorithm
    vector<int> output;
    int n = a.size();

    deque<int> Q(k);
    // 1. Process only the first K elements
    int i;

    for (i = 0; i < k; i++)
    {
        // Logic here ...

        while (!Q.empty() && a[i] > a[Q.back()])
        {
            Q.pop_back();
        }

        Q.push_back(i);
    }

    // 2. Remaining the elements of the array
    for (; i < n; i++)
    {
        // cout << a[Q.front()]<<" ";
        output.push_back(a[Q.front()]);

        // Remove element from the left (contraction when an index lies outside the current window)
        while (!Q.empty() and Q.front() <= i - k)
        {
            Q.pop_front();
        }
        while (!Q.empty() && a[i] >= a[Q.back()])
        {
            Q.pop_back();
        }

        // always
        Q.push_back(i);
    }

    output.push_back(a[Q.front()]);
    return output;
}

int main()
{
    vector<int> input = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int k = 3;
    vector<int> output = maxInWindow(input, k);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    return 0;
}
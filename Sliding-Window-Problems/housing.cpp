/*
Housing
Along one side of a road there is a sequence of vacant
plots of land. Each plot has a different area (non-zero). So,
the areas form a sequence A[1], A[2], ... A[N].
You want to buy K acres of land to build a house. You want
to find all segments of continguous plots (i.e., a subsection
in the sequence) of whose sum is exactly K.
*/

// Solving problem using sliding window technique in O(n) time complexity
#include <iostream>
#include <vector>
using namespace std;

void housing(vector<int> a, int target)
{
    int n = a.size();
    int i = 0, j = 0, cs = 0;
    while (j < n)
    {
        // Expand to rigth
        cs += a[j];
        j++;
        // Remove elemnts from the left till cs>targetrand i<j
        while (cs > target && i < j)
        {
            cs = cs - a[i];
            i++;
        }
        // check for the target sum
        if (cs == target)
        {
            cout << i << "-" << j - 1 << endl;
        }
    }
    return;
}

int main()
{
    vector<int> a = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1, 2};
    int target = 8;
    housing(a, target);
    return 0;
}
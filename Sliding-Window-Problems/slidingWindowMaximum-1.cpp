/*
Sliding Window Maximum
Given an array of integers and an integer K,
return a vector containing  maximum for each and every contiguous subarray of size k.
Constraints:
-10000<=A[i]<=10000, where 0<i<size of array
K>0
Sample Input
K = 3
input = {1, 2, 3, 1, 4, 5, 2, 3, 6}
Sample Output
output = {3,3,4,5,5,5,6}
Explanation
Maximum of 1, 2, 3 is 3
Maximum of 2, 3, 1 is 3
Maximum of 3, 1, 4 is 4
Maximum of 1, 4, 5 is 5
Maximum of 4, 5, 2 is 5
Maximum of 5, 2, 3 is 5
Maximum of 2, 3, 6 is 6
Note - The optimized solution to this problem solution is slightly tricky & non-trivial,
and involves use of deque (doubly ended queue),
we have discussed this problem in Stacks & Queues Section.
*/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> maxInWindow(vector<int> input, int k)
{
    vector<int> subarray;
    vector<int> maxWindow;
    for (int i = 0; i <= input.size() - k; i++)
    {
        for (int j = i; j < i + k; j++)
        {
            subarray.push_back(input[j]);
            ;
        }
        sort(subarray.begin(), subarray.end());
        maxWindow.push_back(subarray[k - 1]);
        subarray.clear();
    }

    return maxWindow;
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
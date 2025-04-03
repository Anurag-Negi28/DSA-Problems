/**Longest Band
Given an array containing N integers, find length of
longest band.
A band is defined as a subsequence which can be re-
ordered in such a manner all elements appear
consecutive (ie with absolute difference of 1 between
neighbouring elements)
A longest band is the band (subsequence) which cont
maximum integers.*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longetsBand(vector<int> arr)
{
    unordered_set<int> s;
    int n = arr.size();
    for (int x : arr)
    {
        s.insert(x);
    }
    int largest = 1;
    for (int element : s)
    {
        int parent = element - 1;
        if (s.find(parent) != s.end())
        {
            int next_no = element + 1;
            int count = 1;
            while (s.find(next_no) != s.end())
            {
                next_no++;
                count++;
            }
            if (count > largest)
            {
                largest = count;
            }
        }
    }
    return largest;
}

int main()
{
    vector<int> arr{1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
    cout << longetsBand(arr) << endl;
    return 0;
}
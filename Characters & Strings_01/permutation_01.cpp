/*A Permutation of a string is another string that contains same characters,
only the order of characters can be different.
For example, “abcd” and “dabc” are Permutation of each other*/
#include <iostream>
#include <algorithm>
using namespace std;
bool checkInclusion(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string A = "test";
    string B = "ttew";

    if (checkInclusion(A, B))
    {
        cout << "Yes, they are permutations of each other." << endl;
    }
    else
    {
        cout << "No, they are not permutations of each other." << endl;
    }

    return 0;
}
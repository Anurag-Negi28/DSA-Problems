#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int> &v)
{
    int result = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        result = result ^ v[i];
    }
    return result;
}
#include <vector>

int main()
{
    vector<int> nums = {1, 2, 3, 1, 4, 2, 3};
    cout << "The single number is: " << singleNumber(nums) << endl;
    return 0;
}
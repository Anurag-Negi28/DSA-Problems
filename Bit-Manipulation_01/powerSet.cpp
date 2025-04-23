#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> powerSet(vector<int> num)
{
    int noSubsets = 1 << num.size();
    vector<vector<int>> result;
    for (int i = 0; i < noSubsets; i++)
    {
        vector<int> list;
        for (int j = 0; j < num.size(); j++)
        {
            if (i & (1 << j))
            { // To check where is the set bit
                list.push_back(num[j]);
            }
        }
        result.push_back(list);
    }
    return result;
}

int main()
{
    vector<int> input = {1, 2, 3};
    vector<vector<int>> subsets = powerSet(input);

    cout << "Power set:" << endl;
    for (const auto &subset : subsets)
    {
        cout << "{ ";
        for (int num : subset)
        {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculateTotal(vector<int> marks)
{
    return marks[0] + marks[1] + marks[2];
}

bool compare(pair<string, vector<int>> s1, pair<string, vector<int>> s2)
{
    return calculateTotal(s1.second) > calculateTotal(s2.second);
}

vector<pair<string, vector<int>>> complexSort(vector<pair<string, vector<int>>> list)
{
    sort(list.begin(), list.end(), compare);
    return list;
}

int main()
{
    vector<pair<string, vector<int>>> list = {
        {"Alice", {85, 90, 78}},
        {"Bob", {88, 76, 92}},
        {"Charlie", {95, 89, 91}},
        {"Diana", {72, 84, 80}},
        {"Eve", {90, 88, 85}}};
    vector<pair<string, vector<int>>> dictonary = complexSort(list);
    for (auto i : dictonary)
    {
        cout << i.first << endl;
    }
}
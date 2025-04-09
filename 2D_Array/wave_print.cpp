#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> matrix)
{
    int m = matrix.size();    // No. of rows
    int n = matrix[0].size(); // No. of columns
    int endRow = m - 1;
    int endColumn = n - 1;
    vector<int> result;
    // Boundary condition while will iterate over columns
    while (endColumn >= 0)
    {
        for (int row = 0; row <= endRow; row++)
        { // Iterate over rows downwards
            result.push_back(matrix[row][endColumn]);
        }
        endColumn--;
        for (int row = endRow; row >= 0; row--)
        { // Iterate over rows upwards
            result.push_back(matrix[row][endColumn]);
        }
        endColumn--;
    }
    return result;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> result = wavePrint(matrix);

    cout << "Wave Print: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
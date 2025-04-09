// The algorithm starts at the top-right or bottom-left corner of the matrix and
// uses comparisons to move either left (if the current value is greater than the target)
// or downward (if the current value is less than the target).
#include <iostream>
#include <vector>
using namespace std;

pair<int, int> searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size() - 1;
    int n = matrix[0].size() - 1;
    if (target < matrix[0][0] || target > matrix[m][n])
    {
        return {-1, -1};
    }
    int i = 0, j = n;
    while (i <= m && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            return {i, j};
        }
        else if (matrix[i][j] >= target) // move either left if the current value is greater than the target
        {
            j--;
        }
        else // move downward if the current value is less than the target
        {
            i++;
        }
    }
    return {-1, -1};
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};
    int target = 23;

    pair<int, int> result = searchMatrix(matrix, target);
    if (result.first != -1 && result.second != -1)
    {
        cout << "Target found at: (" << result.first << ", " << result.second << ")" << endl;
    }
    else
    {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}

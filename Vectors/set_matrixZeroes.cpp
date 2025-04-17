#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<pair<int, int>> position;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                position.push_back({i, j});
            }
        }
    }
    // Make the row zero
    for (int i = 0; i < position.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[position[i].first][j] = 0;
        }
    }
    // Make the column zero
    for (int i = 0; i < position.size(); i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[j][position[i].second] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    setZeroes(matrix);

    // Print the modified matrix
    for (const auto &row : matrix)
    {
        for (const auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
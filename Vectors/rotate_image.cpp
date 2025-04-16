/*
You are given an n x n 2D matrix representing an image,
rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place,
which means you have to modify the input 2D matrix directly.
DO NOT allocate another 2D matrix and do the rotation.
*/
#include <bits/stdc++.h>
using namespace std;

// Approach
// Transpose the matrix
// Then reverse the row

void rotate(vector<vector<int>> &matrix)
{
    // your code goes here
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) // only need to swap elements above the diagonal
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int j = 0; j < n; j++)
    {
        reverse(matrix[j].begin(), matrix[j].end());
    }
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(matrix);
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

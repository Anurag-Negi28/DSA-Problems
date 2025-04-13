#include <iostream>
#include <vector>
using namespace std;

int submatrixSum(vector<vector<int>> v, int sr, int sc, int er, int ec)
{
    int sum = 0;
    // your code goes here
    // First calculate teh prefix sum
    int m = v.size();                                    // No. of Rows
    int n = v[0].size();                                 // No. of Columns
    vector<vector<int>> preVector(m, vector<int>(n, 0)); // Containing prefix sum
    // Calculating prefix sum
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            preVector[i][j] = v[i][j];
            if (i > 0)
            {
                preVector[i][j] += preVector[i - 1][j];
            }
            if (j > 0)
            {
                preVector[i][j] += preVector[i][j - 1];
            }
            if (i > 0 && j > 0)
            {
                preVector[i][j] -= preVector[i - 1][j - 1];
            }
        }
    }
    sum = preVector[er][ec] - (sr > 0 ? preVector[sr - 1][ec] : 0) - (sc > 0 ? preVector[er][sc - 1] : 0) + (sr > 0 && sc > 0 ? preVector[sr - 1][sc - 1] : 0);
    return sum;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3, 4, 6},
        {5, 3, 8, 1, 2},
        {4, 6, 7, 5, 5},
        {2, 4, 8, 9, 4}};

    int tli = 0, tlj = 0, rbi = 1, rbj = 1;

    int result = submatrixSum(mat, tli, tlj, rbi, rbj);

    cout << "Sum of the submatrix from (" << tli << ", " << tlj << ") to (" << rbi << ", " << rbj << ") is: " << result << endl;

    return 0;
}
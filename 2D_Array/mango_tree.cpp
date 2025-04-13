/*
Ramu's father has left a farm organized as an N × N grid.
Each square in the grid either has or does not have a mango tree.
He has to divide the farm with his three sisters as follows:
he will draw one horizontal line and one vertical line to divide the field into four rectangles.
His sisters will choose three of the four smaller fields and he gets the last one.
He wants to divide the field so that he gets the maximum number of mangos possible,
assuming that his sisters will pick the best three rectangles.
For example, suppose the field looks as follows:
      . # # . . .
      # . . # # .
      . # . . . .
      . # # . . #
      # . . # # .
      . # . . . .
Ramu can ensure that he gets at least 3 mango trees by cutting as follows:
        . # | # . . .
        # . | . # # .
        . # | . . . .
      ------+---------
        . # | # . . #
        # . | . # # .
        . # | . . . .
*/

#include <iostream>
#include <vector>
#include <algorithm> // For std::max
using namespace std;

// Function to calculate the maximum mango trees Ramu can get
int mangoTree(vector<vector<int>> matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    // Step 1: Calculate the prefix sum matrix
    vector<vector<int>> prefixSum(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            prefixSum[i][j] = matrix[i][j];
            if (i > 0)
                prefixSum[i][j] += prefixSum[i - 1][j];
            if (j > 0)
                prefixSum[i][j] += prefixSum[i][j - 1];
            if (i > 0 && j > 0)
                prefixSum[i][j] -= prefixSum[i - 1][j - 1];
        }
    }

    // Print the prefixSum matrix
    cout << "Prefix Sum Matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << prefixSum[i][j] << "    ";
        }
        cout << endl;
    }

    // Step 2: Iterate over all possible horizontal and vertical cuts
    int maxMangoes = 0;
    for (int rowCut = 0; rowCut < m - 1; rowCut++)
    {
        for (int colCut = 0; colCut < n - 1; colCut++)
        {
            // Calculate mango trees in each of the four rectangles
            int topLeft = prefixSum[rowCut][colCut];
            int topRight = prefixSum[rowCut][n - 1] - topLeft;
            int bottomLeft = prefixSum[m - 1][colCut] - topLeft;
            int bottomRight = prefixSum[m - 1][n - 1] - topRight - bottomLeft - topLeft;

            // Ramu gets the rectangle with the maximum mangoes after his sisters pick the best three
            int ramuShare = min({topLeft, topRight, bottomLeft, bottomRight});
            maxMangoes = max(maxMangoes, ramuShare);
        }
    }

    return maxMangoes;
}

int main()
{
    vector<vector<int>> matrix = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 0},
        {0, 1, 0, 0, 0, 0},
        {0, 1, 1, 0, 0, 1},
        {1, 0, 0, 1, 1, 0},
        {0, 1, 0, 0, 0, 0}};

    cout << "Maximum mango trees Ramu can get: " << mangoTree(matrix) << endl;

    return 0;
}
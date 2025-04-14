#include <iostream>
using namespace std;

int **create2DArray(int row, int col)
{
    int **arr = new int *[row];
    // Allocating memory for each row
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    // Initializing the 2D Array with numbers
    int value = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }
    return arr;
}

int main()
{
    int m, n;
    cout << "Enter the no. of rows and no. of columns" << endl;
    cin >> m >> n;
    int **arr = create2DArray(m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
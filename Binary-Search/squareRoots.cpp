/*
Square Roots
Given an integer N and an integer P, you need find the
square root of number N upto P places. Do it without
using a library function.
Input Array:
N = 10, P = 3
Output : 3.162
*/

// We make a solution using binary search and linear seacrh

#include <iostream>
using namespace std;

float squareRoot(int n, int p)
{
    int low = 0, high = n - 1;
    float ans = -1.0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid == n)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    float inc = 0.1;
    for (int i = 0; i < p; i++)
    {
        while (ans * ans <= n)
        {
            ans += inc;
        }
        ans -= inc;
        inc = inc / 10;
    }
    return ans;
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << squareRoot(n, p) << endl;
    return 0;
}

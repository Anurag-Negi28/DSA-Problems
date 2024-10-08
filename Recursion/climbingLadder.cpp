/*
Climbing Ladder
Given a ladder
containing N Steps,
you can take a jump of
1,2 or 3 at each step.
Find the number of
ways to climb the
ladder.
*/

#include <iostream>
using namespace std;

int climbingLadder(int n)
{
    int c1, c2, c3;
    // To prevent the value of n going negative
    if (n < 0)
    {
        return 0;
    }
    // Base Case
    if (n == 0)
    {
        return 1;
    }
    // Recursive Case
    return climbingLadder(n - 3) + climbingLadder(n - 2) + climbingLadder(n - 1);
}

int main()
{
    int n;
    cout << "Enter a positive whole number" << endl;
    cin >> n;
    cout << "No. of ways to reach the end of the ladder of " << n << " steps is " << climbingLadder(n);
    return 0;
}
#include <iostream>
using namespace std;
/*
The time complexity of the this function depends on the implementation.
In most programming languages, including C++'s <cmath> library,
the pow function is implemented using Exponentiation by Squaring,
which has a time complexity of O(log n), where n is the exponent.
*/
int fastExponentiation(int n, int a)
{
    int ans = 1;
    while (a > 0)
    {
        if (a & 1)
        {
            ans = ans * n;
        }
        n = n * n;
        a = a >> 1;
    }
    return ans;
}

int main()
{
    int n = 3;
    int a = 5;
    int result = fastExponentiation(n, a);
    cout << "Answer " << result << endl;
}
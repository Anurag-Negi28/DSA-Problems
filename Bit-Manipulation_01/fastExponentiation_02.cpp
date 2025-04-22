#include <iostream>
using namespace std;

double myPow(double x, long long n)
{

    double result = 1;
    // result=pow(x,n);
    bool isNegative = n < 0;
    if (isNegative)
    {
        n = -n;
    }
    while (n > 0)
    {
        if (n & 1)
        {
            result = result * x;
        }
        x = x * x;
        n = n >> 1;
    }
    return isNegative ? 1.0 / result : result;
}
int main()
{
    double x = 2.00000;
    long long n = -2;

    cout << "Result: " << myPow(x, n) << endl;

    return 0;
}
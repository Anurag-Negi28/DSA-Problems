#include <iostream>
using namespace std;

int power(int x, int y, int mod)
{
    // your code goes here
    int result = 1;
    x = x % mod;
    if (x == 0)
    {
        return 0;
    }
    while (y > 0)
    {
        if (y & 1)
        {
            result = (result * x) % mod;
        }
        x = (x * x) % mod;
        y = y >> 1;
    }
    return result;
}

int main()
{
    int x = 12, y = 25, mod = 10007;
    cout << "Result: " << power(x, y, mod) << endl;
    return 0;
}
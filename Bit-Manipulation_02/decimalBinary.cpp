// Convert a number from decimal to binary format
#include <iostream>
using namespace std;

int decimalToBinary(int n)
{
    int bit = 0;
    int ans = 0;
    while (n > 0)
    {
        bit = n % 2;
        n = n / 2;
        ans = ans * 10 + bit;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << decimalToBinary(n);
    return 0;
}
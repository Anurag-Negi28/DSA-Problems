#include <iostream>
using namespace std;

// Getting ith bit of a number
int getIthBit(int n, int i)
{
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

// Setting ith bit of a number

int main()
{
    int n, i;
    cin >> n >> i;
    cout << getIthBit(n, i);
    return 0;
}
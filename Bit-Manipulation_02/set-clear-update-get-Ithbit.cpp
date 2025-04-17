#include <iostream>
using namespace std;

// Getting ith bit of a number
int getIthBit(int n, int i)
{
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

// Setting ith bit of a number
int setIthBit(int n, int i)
{
    int mask = (1 << i);
    return n | mask;
}

// Clear ith bit of a number
int clearIthBit(int n, int i)
{
    int mask = ~(1 << i);
    return n & mask;
}

// Update ith Bit of a number
int updateIthBit(int &n, int i, int v)
{
    clearIthBit(n, i);
    int mask = (v << i);
    return n | mask;
}

// Clear ith Bit of a number
int clearLastIBits(int n, int i)
{
    int mask = (-1 << i);
    return n & mask;
}

int main()
{
    int n, i, v;
    cin >> n >> i >> v;
    cout << getIthBit(n, i);
    cout << endl
         << setIthBit(n, i);
    cout << endl
         << clearIthBit(n, i);
    cout << endl
         << updateIthBit(n, i, v);
    cout << endl
         << clearLastIBits(n, i);
    return 0;
}
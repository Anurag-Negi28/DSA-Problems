// Program to count the number of set bits
#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n > 0) // Maximum this loop will run log n times, as there are those many bits
    {
        count += (n & 1);
        n = n >> 1;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << countSetBits(n);
    return 0;
}

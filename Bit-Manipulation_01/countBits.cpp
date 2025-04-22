#include <iostream>
using namespace std;

int countBits(int a)
{
    int count = 0;
    while (a > 0)
    {
        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
    }
    return count;
}
int countBitsOptimized(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    int a = 9999999;
    int count = countBitsOptimized(a);
    cout << "No. of set bits in a are " << count << endl;
}
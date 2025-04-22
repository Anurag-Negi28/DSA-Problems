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
int main()
{
    int a = 5;
    int count = countBits(a);
    cout << "No. of set bits in a are " << count;
}
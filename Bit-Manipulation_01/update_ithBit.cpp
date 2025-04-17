#include <iostream>
using namespace std;

void clear_ithBit(int &a, int i)
{
    int mask = 1 << i;
    a = a & (~mask);
}

void update_ithBit(int &a, int v, int i)
{
    clear_ithBit(a, i);
    int mask = v << i;
    a = a | mask;
}
int main()
{
    int a = 5;
    int i = 1;
    int v = 1;
    update_ithBit(a, v, i);
    cout << "Updated ith bit " << a;
}
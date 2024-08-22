#include <iostream>
using namespace std;

int main()
{
    cout << ~0;
    // Output: -1
    // Explnation: ~0 = 1111 1111 1111 1111 1111 1111 1111 1111
    // 2's complement of 0 is -0, so ~0 = -1

    // Shift Operator
    // Left Shift Operator
    cout << endl
         << (1 << 2);
    // Multiply the number by 2^2

    // Right shift Operator
    cout << endl
         << (10 >> 1);
    // Dice the number by 2^1
    return 0;
}
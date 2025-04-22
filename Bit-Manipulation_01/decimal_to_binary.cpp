#include <iostream>
using namespace std;

int makeitBinary(int n)
{
    int result = 0;
    int pow = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            result = result + pow;
        }
        pow = pow * 10;
        n = n >> 1;
    }
    return result;
}
int main()
{
    int number = 9;
    cout << "Binary representation of " << number << " is: " << makeitBinary(number) << endl;
    return 0;
}
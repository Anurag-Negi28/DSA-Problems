#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binaryToDecimal(string s)
{
    // your code goes here
    int decimal = 0;
    int n = s.length();
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            decimal = decimal + pow(2, n - i - 1);
        }
    }
    return decimal;
}
int main()
{
    string invalidBinary = "1001";
    cout << "Decimal value: " << binaryToDecimal(invalidBinary) << endl;
    return 0;
}

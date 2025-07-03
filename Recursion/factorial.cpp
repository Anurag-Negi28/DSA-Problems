#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans;
    // Base Case
    if (n == 0)
        return 1;
    ans = n * factorial(n - 1);
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cout.flush();
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
/*
Biggest Number String
You are given a vector of numbers. You want to concatenate these numbers together to form the lexicographically largest number. Print that largest number number. You can't rearrange the digits of any number, however you can place the numbers next to each other in any order.
Input
10,11,20,30,3
Output
330201110
You can verify that this is the largest number that we can form.
Hint
Use Sorting.
(This is a bit tricky problem, we have discussed a similar problem in sorting & searching section - Smallest String. In case you are not able to solve it right now, you can come back and solve it later)conc
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string concatenate(vector<int> numbers)
{
    // complete this method and return the largest number you can form as a string
    if (numbers.empty())
        return "";

    // Custom comparator to sort the numbers in descending order
    sort(numbers.begin(), numbers.end(), [](int a, int b)
         { return to_string(a) + to_string(b) > to_string(b) + to_string(a); });

    // Handle the case where the largest number is 0
    if (numbers[0] == 0)
        return "0";

    string s;
    for (int i = 0; i < numbers.size(); i++)
    {
        s += to_string(numbers[i]);
    }
    return s;
}

int main()
{
    vector<int> numbers = {10, 11, 20, 30, 3};
    cout << concatenate(numbers) << endl;
    return 0;
}
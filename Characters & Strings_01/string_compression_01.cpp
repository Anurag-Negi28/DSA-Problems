// String compression using extra space of O(n)

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int compress(vector<char> &chars)
{
    string s;
    char current;
    int n = chars.size();
    for (int i = 0; i < n; i++)
    {
        char current = chars[i];
        int count = 1;
        while (i + 1 < n && chars[i] == chars[i + 1])
        {
            count++;
            i++;
        }
        s += current;
        if (count > 1)
        {
            s += to_string(count);
        }
    }
    return s.length();
}
int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int compressedLength = compress(chars);
    cout << "Compressed Length: " << compressedLength << endl;
    return 0;
}
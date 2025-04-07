// String compression without using any extra space with inplace writing in the chars array itself
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int compress(vector<char> &chars)
{
    int writeIndex = 0; // Index to write the compressed characters
    int n = chars.size();

    for (int i = 0; i < n; i++)
    {
        char current = chars[i];
        int count = 1;

        // Count consecutive characters
        while (i + 1 < n && chars[i] == chars[i + 1])
        {
            count++;
            i++;
        }

        // Write the character
        chars[writeIndex++] = current;

        // Write the count if greater than 1
        if (count > 1)
        {
            string countStr = to_string(count);
            for (char c : countStr)
            {
                chars[writeIndex++] = c;
            }
        }
    }

    return writeIndex; // Return the length of the compressed string
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int compressedLength = compress(chars);

    cout << "Compressed Length: " << compressedLength << endl;
    cout << "Compressed Array: ";
    for (int i = 0; i < compressedLength; i++)
    {
        cout << chars[i];
    }
    cout << endl;

    return 0;
}
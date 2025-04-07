#include <bits/stdc++.h>
using namespace std;

string vowel(string S)
{
    // your code goes here
    string output;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            output += S[i];
        }
    }

    return output;
}
int main()
{
    string S = "aeoibsddaeioudb";
    cout << "Vowels in the string: " << vowel(S) << endl;
    return 0;
}
/*
String Normalisation
You are given a sentence with words separated by spaces.
Your task is to:
Write a function that returns a copy of this sentence where all the words:
start with a capital letter
the rest of the letters are lower case
Note:
Your function should not modify the sentence given as argument.
Sample Input
This is SO MUCH FUN!
Sample Output
This Is So Much Fun!
*/

#include <cctype>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

string normalize(const string &sentence)
{
    string copy = sentence;
    // Make the entire string lowercase
    transform(copy.begin(), copy.end(), copy.begin(), ::tolower);

    copy[0] = toupper(copy[0]);

    // Capitalize the first character of each word
    for (int i = 0; i < copy.length() - 1; i++)
    {
        if (copy[i] == ' ' && i + 1 < copy.length())
        {
            copy[i + 1] = toupper(copy[i + 1]);
        }
    }
    return copy;
}

int main()
{
    string sentence = "This is SO MUCH FUN!";
    cout << normalize(sentence) << endl;
    return 0;
}
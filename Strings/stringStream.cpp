// Tokenisation os string using stringsteam

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

vector<string> tokenizeString(const string &str)
{
    stringstream ss(str); // Create a stringstream object with the input string
    string token;
    vector<string> tokens;

    while (getline(ss, token, ' ')) // Use getline to split the string by spaces
    {
        tokens.push_back(token);
    }
    return tokens;
}

int main()
{
    string str = "This is an example string for tokenization";
    for (string i : tokenizeString(str))
    {
        cout << i << ' ';
    }

    stringstream ss;
    ss << "123 456 789";

    int a, b, c;
    ss >> a >> b >> c;

    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    ss.clear(); // Clear the stream state
    ss.str(""); // Clear the contents of the stream

    ss << "New content";
    string newStr = ss.str();
    cout << "New string: " << newStr << endl;
    return 0;
}
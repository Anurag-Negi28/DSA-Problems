// string class in cpp is a dynamic character array
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    getline(cin, s1); // to get single line input terminating at '\n'
    cout << "Entered string is " << s1 << endl;
    string s2;
    getline(cin, s2, '.'); // to get multiple line input that ends with '.'
    cout << "Entered string is " << s2 << endl;
}
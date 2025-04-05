#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[] = {'a', 'b', 'c', 'd', '\0'};       // Correct initialization of an character array followed by a null character
    char str[] = "anurag";                       // You can also initialize a character array like this
    cout << "Length of c " << strlen(c) << endl; // It prints the length of visible values
    cout << "Length of str " << strlen(str) << endl;
    cout << "Length of c " << sizeof(c) << endl;     // sizeof prints the number of character inlcluding the null character
    cout << "Length of str " << sizeof(str) << endl; //+1 of strlen()

    // Taking input
    char ch[10];
    cin >> ch;
    cout << ch << endl;
}
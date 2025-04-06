#include <iostream>
using namespace std;
// input using getline()
int main()
{
    char sentence[100];
    cin.getline(sentence, 100); // You need to specify the array name and length
    // It only reads input till new line '\n'
    cout << sentence << endl;
    // In order to read new line you can pass a parameter telling the logic where to stop like-'#', '.'
    char ch[100];
    cin.getline(ch, 100, '#');
    cout << ch << endl;
}
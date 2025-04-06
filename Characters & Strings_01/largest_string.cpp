#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of strings you want to print ";
    cin >> n;
    cin.get(); // consume the new line character from the above input
    char sentence[100];
    char largest[100];
    int max = 0;
    cout << "Enter the strings: " << endl;
    while (n--)
    {
        cin.getline(sentence, 100);
        if (strlen(sentence) > max)
        {
            max = strlen(sentence);
            strcpy(largest, sentence);
        }
    }
    cout << "Largest string is: " << largest;
}
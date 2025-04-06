#include <iostream>
using namespace std;

char shortestPath(char *ch)
{
    int x = 0;
    int y = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        switch (ch[i])
        {
        case 'N':
            x++;
            break;
        case 'S':
            x--;
            break;
        case 'E':
            y++;
            break;
        case 'W':
            y--;
            break;
        }
    }
    cout << "No.of units north " << x << " No. of units east " << y << endl;
    if (x >= 0 && y >= 0)
    {
        while (x--)
        {
            cout << "N";
        }
        while (y--)
        {
            cout << "E";
        }
    }
}

int main()
{
    char ch[100];
    cout << "Enter a string " << endl;
    cin.getline(ch, 100);
    shortestPath(ch);
}
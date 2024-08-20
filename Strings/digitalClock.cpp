#include <string>
#include <iostream>
#include <sstream> // Include this header for stringstream
#include <iomanip> // Include this header for setw and setfill
using namespace std;

string convert_to_digital_time(int minutes)
{
    int hours = 0;
    if (minutes >= 60)
    {
        hours = minutes / 60;
        minutes = minutes % 60;
    }

    // Use stringstream to format the output
    stringstream ss;
    ss << hours << ':' << setw(2) << setfill('0') << minutes;
    return ss.str();
}

int main()
{
    int minutes;
    cout << "Enter minutes: ";
    cin >> minutes;
    cout << "Digital time: " << convert_to_digital_time(minutes) << endl;
    return 0;
}
// Introduction to string class in C++

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String:";
    getline(cin, str);
    cout << "The enetered string is: " << str << endl;

    size_t first_occurrence = str.find("world");
    // find the last occurrence
    size_t last_occurrence = str.rfind("world");
    cout << "First Occurrence: " << first_occurrence << endl;
    cout << "Last Occurrence: " << last_occurrence << endl;

    str.append(" Have a good day!");

    cout << "After: " << str << endl;

    // insert "beautiful" at the 13th index
    str.insert(13, " beautiful");
    cout << "After: " << str << endl;

    // erase five characters starting from the seventh index
    str.erase(7, 5);
    cout << "After: " << str << endl;

    // replace two characters with "Earth"
    // starting from the seventh index
    str.replace(6, 2, "Earth");
    cout << "After: " << str << endl;

    string str1 = "Hello world";
    string str2 = "Hello world";
    string str3 = "Hello";
    string str4 = "Hello world, What's Up?";

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    cout << "String 3: " << str3 << endl;
    cout << "String 4: " << str4 << endl;

    // compare the strings
    cout << "Comparing String 1 and String 2: " << str1.compare(str2) << " (Equal)" << endl;
    cout << "Comparing String 1 and String 3: " << str1.compare(str3) << " (String 1 is Longer)" << endl;
    cout << "Comparing String 1 and String 4: " << str1.compare(str4) << " (String 1 is Smaller)" << endl;
}
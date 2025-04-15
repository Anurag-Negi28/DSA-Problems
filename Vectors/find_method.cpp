#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int search(vector<int> arr, int key)
{
    vector<int>::iterator it = find(arr.begin(), arr.end(), key);
    return it - arr.begin();
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 2, 3, 6, 9};
    int key;
    cin >> key;
    cout << "Key found at " << search(arr, key);
}

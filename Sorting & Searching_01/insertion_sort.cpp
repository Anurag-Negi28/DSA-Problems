#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int current, prev;
    int n = arr.size();
    for (int i = 1; i < n; i++) // Start from the second element
    {
        current = arr[i]; // Store the current element
        prev = i - 1;
        while (prev >= 0 && arr[prev] > current) // Shift elements of the sorted part of the array to the right
        {
            arr[prev + 1] = arr[prev];
            prev--; // Iterates backwards
        }
        arr[prev + 1] = current; // Place the current element in its correct position
    }
}

int main()
{
    vector<int> arr = {5, 3, 8, 6, 2, 7, 4, 1};
    insertionSort(arr);
    for (auto i : arr)
    {
        cout << i << ", ";
    }
}
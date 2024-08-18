// Busy Life
// You are actually very busy person. You have a long list of activities. Your aim is to finish much as activities as possible.
// In the given figure, if you go to date with crush, you cannot participate in the coding contest and you can’t watch the movie. Also if you play DotA, you can’t study for the exam. If you study for the exam you can’t sleep peacefully. The maximum number of activities that you can do for this schedule is 3.
// Either you can
// watch movie, play DotA and sleep peacefully (or)
// date with crush, play DotA and sleep peacefully
// Given the start and finish times of activities, print the maximum number of activities. Input is already store in a vector of pairs. Each pair contains the start and end of the activity.
// Sample Input
// (7,9) (0,10) (4,5) (8,9) (4,10) (5,7)
// Output
// 3

// Hints
// Think Sorting!
// Expected Complexity
// O(NLogN)

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int countActivites(vector<pair<int, int>> activities)
{
    // Complete this method

    // Sort activities based on their finish time
    sort(activities.begin(), activities.end(), [](pair<int, int> &a, pair<int, int> &b)
         { return a.second < b.second; });

    // Select the first activity
    int count = 1;
    int last_finish_time = activities[0].second;

    // Iterate over the rest of the activities
    for (int i = 1; i < activities.size(); i++)
    {
        if (activities[i].first >= last_finish_time)
        {
            count++;
            last_finish_time = activities[i].second;
        }
    }

    return count;
}

int main()
{
    vector<pair<int, int>> activities = {{7, 9}, {0, 10}, {4, 5}, {8, 9}, {4, 10}, {5, 7}};
    cout << countActivites(activities) << endl;
    return 0;
}
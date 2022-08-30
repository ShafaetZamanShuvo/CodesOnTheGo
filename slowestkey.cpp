#include <bits/stdc++.h>
#include <cmath>
using namespace std;

class Solution
{
public:
    char slowestKey(vector<int> &releaseTimes, string keysPressed)
    {
        int n = releaseTimes.size();
        int distance = 0;
        int max_distance = 0;
        int max_distance_index = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (i == 0)
            {
                distance = releaseTimes[i];
                if (distance > max_distance)
                    max_distance = distance;
                cout << "max_distance" << max_distance << endl;
                max_distance_index = i;
            }
            if (i > 0)
            {
                distance = releaseTimes[i] - releaseTimes[i-1];
                if (distance > max_distance)
                    {max_distance = distance; max_distance_index = i;}
                            cout
                        << "max_distance" << max_distance << endl;
            }
        }

        return keysPressed[max_distance_index];
    }
};

int main()
{
    Solution s;
    vector<int> releaseTimes = {9, 29, 49, 50};
    string keysPressed = "cbcd";
    cout << s.slowestKey(releaseTimes, keysPressed) << endl;
    return 0;
}
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
        char temp;
        char slowest;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                distance = releaseTimes[i];
                if (distance > max_distance)
                {
                    max_distance = distance;
                    slowest = keysPressed[i];
                }
            }
            if (i > 0)
            {
                distance = releaseTimes[i] - releaseTimes[i - 1];
                if (distance == max_distance)
                {
                    temp = keysPressed[i];
                    if (temp > slowest)
                        slowest = temp;
                }
                else if (distance > max_distance)
                {
                    max_distance = distance;
                    slowest = keysPressed[i];
                }
            }
        }

        return slowest;
    }
};

int main()
{
    Solution s;
    vector<int> releaseTimes = {28, 65, 97};
    string keysPressed = "gaf";
    cout << s.slowestKey(releaseTimes, keysPressed) << endl;
    return 0;
}
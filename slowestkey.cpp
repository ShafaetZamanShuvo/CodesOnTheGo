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

        vector<char> key_pressed;

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
                if(distance == max_distance)
                {
                    key_pressed.push_back(keysPressed[i]);
                }
                else if(distance > max_distance)
                {
                    max_distance = distance;
                    max_distance_index = i;
                    key_pressed.clear();
                    key_pressed.push_back(keysPressed[i]);
                }
                
            }
        }
        for(int i = 0; i< key_pressed.size(); i++)
        {
            cout << key_pressed[i] << " "<<endl;
        }

        //sort the key_pressed
        sort(key_pressed.begin(), key_pressed.end());

        // cout << "The answer is " << key_pressed[0] << endl;

        return key_pressed[key_pressed.size()-1];; 

    }
};

int main()
{
    Solution s;
    vector<int> releaseTimes = {12,23,36,46,62};
    string keysPressed = "spuda";
    cout << s.slowestKey(releaseTimes, keysPressed) << endl;
    return 0;
}
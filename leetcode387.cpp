#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        int size = s.size();
        for(int i = 0; i< size; i++)
        {
            mp[i]++;
        }

        for(int i = 0; i< size; i++)
        {
          //check if the value of s[i] in the map is 1
            if(mp[s[i]] == 1)
            {
                return i;
            }
        }

        return -1;

    }
};
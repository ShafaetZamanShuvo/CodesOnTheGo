#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countWords(vector<string> &words1, vector<string> &words2)
    {
        int m = words1.size();
        int n = words2.size();

        int count = 0;

        unordered_map<string, int> mp;
        for (int i = 0; i < m; i++)
        {
            mp[words1[i]]++;
        }

        unordered_map<string, int> mp2;
        for (int i = 0; i < n; i++)
        {
            mp2[words2[i]]++;
        }
        // print mp2
        vector<string> v2;
        // include every element in mp2 in v1
        for (auto it = mp2.begin(); it != mp2.end(); it++)
        {
            v2.push_back(it->first);
        }
        // print v1 and v2
        for (auto &it : mp)
        {
            if (mp2.find(it.first) != mp2.end())
            {
                // if both have count of 1
                if (it.second == 1 && mp2[it.first] == 1)
                {
                    count++;
                }
            }
        }

        return count;
    }
};

int main()
{
    Solution s;
    vector<string> words1 = {"leetcode", "is", "amazing", "as", "is"};
    vector<string> words2 = {"amazing", "is", "leetcode"};
    cout << s.countWords(words1, words2) << endl;
    return 0;
}
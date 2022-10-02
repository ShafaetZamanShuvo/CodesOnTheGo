#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> uncommonFromSentences(string s1, string s2)
    {

        vector<string> ans;
        unordered_map<string, int> mp;
        vector<string> sentence;
        string word = "";
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == ' ')
            {
                sentence.push_back(word);
                word = "";
            }
            else
            {
                word += s1[i];
            }
        }
        sentence.push_back(word);
        word = "";
        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] == ' ')
            {
                sentence.push_back(word);
                word = "";
            }
            else
            {
                word += s2[i];
            }
        }
        sentence.push_back(word);

        for (int i = 0; i < sentence.size(); i++)
        {
            mp[sentence[i]]++;
        }

        for (auto i : mp)
        {
            if (i.second == 1)
            {
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};
int main()
{
    Solution s;
    string s1 = "this apple is sweet";
    string s2 = "this apple is sour";
    vector<string> ans = s.uncommonFromSentences(s1, s2);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
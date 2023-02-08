#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            mp[t[i]]--;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second != 0)
                return false;
        }
        return true;
    }
};

int main()
{
    Solution s; 
    string s1 = "anagram";
    string s2 = "nagaam";
    cout << s.isAnagram(s1, s2) << endl;
}
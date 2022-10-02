#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool makeEqual(vector<string>& words) {

        map<char, int> mp;
        for(int i = 0; i< words.size(); i++)
        {
            string word = words[i];
            for(int j = 0; j< word.size(); j++)
            {
                mp[word[j]]++;
            }
        }
        for(auto i: mp)
        {
            if(i.second % words.size() != 0) // the  frequency
            {
                return false;
            }
        }
        
        return true;

        
    }
};

int main()
{
    Solution s;
    vector<string> words = {"caaaaa","aaaaaaaaa","a","bbb","bbbbbbbbb","bbb","cc","cccccccccccc","ccccccc","ccccccc","cc","cccc","c","cccccccc","c"};
    cout << s.makeEqual(words) << endl;
    return 0;

}
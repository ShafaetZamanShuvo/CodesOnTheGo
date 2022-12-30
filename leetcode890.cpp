#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> findAndReplacePattern(vector<string> &words, string pattern)
    {
        vector<string> result;
        for (int i = 0; i < words.size(); i++)
        {
            if (isMatch(words[i], pattern))
            {
                result.push_back(words[i]);
            }
        }
        return result;
    }

    bool isMatch(string word, string pattern) // this function is to check whether the word is match the pattern, we do it by using two maps
    {
        vector<int> wordMap(26, 0);
        vector<int> patternMap(26, 0);
        for (int i = 0; i < word.length(); i++)
        {
            if (wordMap[word[i] - 'a'] != patternMap[pattern[i] - 'a']) // it means that the wordMap[word[i] - 'a'] is not equal to 0, and the patternMap[pattern[i] - 'a'] is not equal to 0
            {
                return false;
            }
            wordMap[word[i] - 'a'] = i + 1; 
            patternMap[pattern[i] - 'a'] = i + 1;
        }
        return true;
    }
};

int main()
{
    // your code goes here
    Solution s;
    vector<string> words = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string pattern = "abb";
    vector<string> result = s.findAndReplacePattern(words, pattern);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
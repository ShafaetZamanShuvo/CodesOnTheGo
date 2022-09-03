#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> printVertically(string s)
    {

        // first of all split the string into words based on delimiter space
        vector<string> words;
        string word = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                word += s[i];
            }
            else
            {
                words.push_back(word);
                word = "";
            }
        }
        words.push_back(word);

        // now we have all the words in the vector words
        // now we need to find the max length of the word
        int max_len = 0;

        for (int i = 0; i < words.size(); i++)
        {
            max_len = max(max_len, (int)words[i].size());
        }

        // now we have the max length of the word
        // now we need to create a vector of strings of size max_len
        vector<string> ans(max_len, "");

        // now we need to fill the ans vector

        for (int i = 0; i < words.size(); i++)
        {
            // fill every single word with spaces until the max_length
            int filler_len = max_len - (int)words[i].size();

            for (int j = 0; j < filler_len; j++)
            {
                words[i] += " ";
            }
        }

        for (int i = 0; i < max_len; i++)
        {
            for (int j = 0; j < words.size(); j++)
            {
                ans[i] += words[j][i];
            }
        }

        // now we need to remove the trailing spaces from the ans vector
        for (int i = 0; i < ans.size(); i++)
        {
            int j = ans[i].size() - 1;
            while (ans[i][j] == ' ')
            {
                ans[i].pop_back();
                j--;
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<string> ans = s.printVertically("TO BE OR NOT TO BE");
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
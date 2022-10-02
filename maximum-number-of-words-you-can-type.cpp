#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int canBeTypedWords(string text, string brokenLetters)
    {

        vector<string> words;
        string word = "";
        for (int i = 0; i < text.size(); i++)
        {
            if (text[i] == ' ')
            {
                words.push_back(word);
                word = "";
            }
            else
            {
                word += text[i];
            }
        }
        words.push_back(word);

        int count = 0;

        // we have all the words in the vector words
        unordered_map<char, int> mp;
        for (int i = 0; i < brokenLetters.size(); i++)
        {
            mp[brokenLetters[i]]++;
        }

        // now we have all the broken letters in the map mp
        for (int i = 0; i < words.size(); i++)
        {
            cout << words[i] << endl;
            int flag = 0;
            for (int j = 0; j < words[i].size(); j++)
            {
                //print the word
                
                if (mp[words[i][j]] > 0) // if the letter is broken
                {
                    cout<<"broken letter is "<<words[i][j]<<" ";
                    flag = 1;
                    break;
                }
                
            }
            if (flag == 0) // if the word is not broken
            {
                count++;
            }
            
        }

        return count;
    }
};

int main()
{
    Solution s;
    string text = "leet code";
    string brokenLetters = "e";
    cout << s.canBeTypedWords(text, brokenLetters);
    return 0;
}
